LUPDATE FOR C
=============

The `lupdate-c` program reads from a `.c` or `.h` source file written with
libqt6c and generates a Qt translation source file (`.ts`) for use with either
Qt Linguist and/or Qt's [`lrelease`](https://doc.qt.io/qt-6/linguist-lrelease.html)
tools.

Example
-------

For a usage example, see the [`lupdate` example](https://github.com/rcalixte/libqt6c-examples/tree/master/src/lupdate)
folder.

Building
--------

This can be built from source by running `go build` while in this directory.
The resulting binary will be static by default and named `lupdate-c`. There are
no external dependencies.

Installation
------------

This can also be fetched and installed by running:

```bash
go install github.com/rcalixte/libqt6c/cmd/lupdate-c@latest
```

If successful, this will place the `lupdate-c` binary at `$GOPATH/bin`.

Usage
-----

Valid and supported syntax from the code file(s) containing libqt6c methods
are processed into Qt translation files for use with Qt's internationalization
tools.

Comments are supported with [similar syntax natively supported by Qt](https://doc.qt.io/qt-6/i18n-source-translation.html):

```c
// an ignored/private comment

/* an ignored/private comment block */

//: a comment for translators

/*: an included comment block for translators */
```

To see the full options that are available, run `./lupdate-c -h`.

Execution design
----------------

1. Tokenize and parse valid source file(s).

2. Generate translation contexts based on the C code structure.

   i. Example of valid and supported syntax structure<sup>1</sup>:

    ```c
    const char* txt = q_application_translate("Context", "Translated string");
    QLabel* label = q_label_new3(txt);

    const char* text = q_pushbutton_tr("Translated string");
    QPushButton* button = q_pushbutton_new3(text);
    ```

3. Write out the translation file.

> [!NOTE]
> As a workaround, all `tr` methods use `QObject` as the translation context.

<sup>1</sup>Only raw string and integer parameter types used in valid syntax
are supported.
