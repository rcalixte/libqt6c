/*
 * This file incorporates code from the [go-xxd] project (https://github.com/felixge/go-xxd)
 * Copyright (c) 2016 Felix Geisendörfer (felix@debuggable.com) and contributors
 * Licensed under the MIT License. See original LICENSE for details.
 */

package main

import (
	"io"
	"strconv"
	"strings"
)

// hex lookup table for hex encoding
const (
	ldigits = "0123456789abcdef"
	udigits = "0123456789ABCDEF"
)

// variables used in xxd()
var (
	space        = []byte(" ")
	quadSpace    = []byte("    ")
	newLine      = []byte("\n")
	unsignedChar = []byte("unsigned char ")
	unsignedInt  = []byte("};\n\nunsigned int ")
	equals       = []byte("_len = ")
	brackets     = []byte("[] = {")
	commaSpace   = []byte(", ")
	comma        = []byte(",")
	semiColonNl  = []byte(";\n")
)

func cfmtEncode(dst, src []byte, hextable string) {
	b := src[0]
	dst[3] = hextable[b&0x0f]
	dst[2] = hextable[b>>4]
	dst[1] = 'x'
	dst[0] = '0'
}

func xxd(r io.Reader, w *strings.Builder, fname string, upper bool) error {
	var (
		cols        = 12
		octs        = 4
		caps        = ldigits
		doCHeader   = true
		doCEnd      bool
		lenUChar    = len(unsignedChar)
		lenUInt     = len(unsignedInt)
		lenFName    = len(fname)
		lenBrackets = len(brackets)
		lenEquals   = len(equals)

		varDeclChar = make([]byte, lenUChar+lenFName+lenBrackets)
		varDeclInt  = make([]byte, lenUInt+lenFName+lenEquals)
	)

	// Copy the standard text in the output:
	// e.g. unsigned char _resource_foo[] = { and unsigned int _resource_foo_len =
	_ = copy(varDeclChar[0:lenUChar], unsignedChar[:])
	_ = copy(varDeclInt[0:lenUInt], unsignedInt[:])

	for i := range lenFName {
		if fname[i] != '.' {
			varDeclChar[lenUChar+i] = fname[i]
			varDeclInt[lenUInt+i] = fname[i]
		} else {
			varDeclChar[lenUChar+i] = '_'
			varDeclInt[lenUInt+i] = '_'
		}
	}

	_ = copy(varDeclChar[lenUChar+lenFName:], brackets[:])
	_ = copy(varDeclInt[lenUInt+lenFName:], equals[:])

	// Switch between upper- and lower-case hex chars
	if upper {
		caps = udigits
	}

	// These are bumped down from the beginning of the function in order to
	// allow for their sizes to be allocated based on the user's specifications
	var (
		line = make([]byte, cols)
		char = make([]byte, octs)
	)

	c := int64(0) // number of characters
	nl := int64(0)

	var (
		n   int
		err error
	)

	for {
		n, err = io.ReadFull(r, line)
		if err != nil && err != io.EOF && err != io.ErrUnexpectedEOF {
			return err
		}

		if n == 0 {
			doCEnd = true
		}

		if doCHeader {
			w.Write(varDeclChar)
			w.Write(newLine)
			doCHeader = false
		}

		// C values
		if !doCEnd {
			w.Write(quadSpace)
		}

		for i := range n {
			cfmtEncode(char, line[i:i+1], caps)
			w.Write(char)
			c++

			// don't add spaces to EOL
			if i != n-1 {
				w.Write(commaSpace)
			} else if n == cols {
				w.Write(comma)
			}
		}

		if doCEnd {
			w.Write(varDeclInt)
			w.Write([]byte(strconv.FormatInt(c, 10)))
			w.Write(semiColonNl)
			return nil
		}

		w.Write(newLine)
		nl++
	}
}
