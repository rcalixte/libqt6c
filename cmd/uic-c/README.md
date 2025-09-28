USER INTERFACE COMPILER (UIC) FOR C
===================================

The `uic-c` program compiles a Qt Creator or Qt Designer `.ui` file into a
C source header (`.h`) file which can be included as application code by
developers using libqt6c to create applications. Some functionality is
difficult to implement automatically, namely custom widgets. It is still
possible to implement manually with the generated output as an aid if that is
desired. This program also has some flags that attempt to assist with this
where possible. See the full usage for more details.

One key difference from the C++ and Python implementations is that rather than
taking a widget-based parameter and forming it into the root of the target
creation, the C setup function takes no parameters and heap allocates the
generated creation that is returned. This aims to facilitate more fine-grained
control over how the created objects are managed from within C.

Example
-------

For usage examples, see the [`uic` example](https://github.com/rcalixte/libqt6c-examples/tree/master/src/uic)
or the [`uic-kf6` example](https://github.com/rcalixte/libqt6c-examples/tree/master/src/libraries/extras/uic-kf6)
folder.

Building
--------

This can be built from source by running `go build` while in this directory.
The resulting binary will be static by default and named `uic-c`. There are no
external dependencies.

Installation
------------

This can also be fetched and installed by running:

```bash
go install github.com/rcalixte/libqt6c/cmd/uic-c@latest
```

If successful, this will place the `uic-c` binary at `$GOPATH/bin`.

Usage
-----

This program attempts to parse the input `.ui` file to generate a header file
that can be included directly when used. By default, connections are meant to be
implemented in a separate header file that can be included into the generated
output code. This is configurable via options.

To see the full options that are available, run `./uic-c -h`.

Execution design
----------------

1. Parse the XML type definitions from the `.ui` input file

2. Recursively walk and emit C header code.

When developing with this `uic-c`, it's useful to run Qt's `uic` side-by-side
and compare the output of each program for missing attributes or assignments.
By default, unhandled fields/attributes will be included as comments in the
generated output code for increased developer awareness.
