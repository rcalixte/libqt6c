QT RESOURCE COMPILER (QRC) FOR C
================================

The `qrc-c` program reads from a Qt Resource Collection `.qrc` file and
generates a source header (`.h`) for use in libqt6c applications.

Example
-------

For a usage example, see the [`rcc` example](https://github.com/rcalixte/libqt6c-examples/tree/master/src/rcc)
folder.

Building
--------

This can be built from source by running `go build` while in this directory.
The resulting binary will be static by default and named `qrc-c`. There are no
external dependencies.

Installation
------------

This can also be fetched and installed by running:

```bash
go install github.com/rcalixte/libqt6c/cmd/qrc-c@latest
```

If successful, this will place the `qrc-c` binary at `$GOPATH/bin`.

Usage
-----

By default, this program attempts to use Qt's `rcc` application from the local
path. In the event this is not ideal, the `-r` flag can be used to provide the
full path.

To see the full options that are available, run `./qrc-c -h`.

Execution design
----------------

1. Pass the `.qrc` input file to `rcc` (or the defined alternative).

2. Convert the binary data output file to its hexadecimal representation and
prepend that representation and the related value of the length of the data
(`unsigned int`) to the generated C header code.

3. The binary data file is deleted. The functions in the generated header file
can be included for execution in application code.
