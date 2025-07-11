<div align="center">
<img alt="libqt6c" src="assets/libqt6c.png" height="128px;" />

![MIT License](https://img.shields.io/badge/License-MIT-green)
[![Go Report Card](https://goreportcard.com/badge/github.com/rcalixte/libqt6c)](https://goreportcard.com/report/github.com/rcalixte/libqt6c)
[![Static Badge](https://img.shields.io/badge/v0.14%20(stable)-f7a41d?logo=zig&logoColor=f7a41d&label=Zig)](https://ziglang.org/download/)
</div>

---

MIT-licensed Qt 6 bindings for C

This library is a straightforward binding of the Qt 6.8+ API. You must have a working C and C++ development toolchain to use this binding as well as the development files needed to build Qt 6 applications. This library and the related examples use the Zig toolchain. The [Building](#building) section below has instructions for installing the required dependencies.

For previous libqt6c versions supporting Qt 6.4+, there are branches corresponding to the major and minor version of the Qt base, e.g. `6.4`. Note that these versions will receive minimal support and should be considered frozen.

This library is designed to be used as a dependency in a larger application and not as a standalone library. The versioning scheme used by this library is based on the Qt version used as a base to generate the bindings with an additional nod to the library revision number. Any breaking changes to the library will be reflected in the changelog.

These bindings are based on the [MIQT bindings for Go](https://github.com/mappu/miqt) that were released in 2024. The bindings are complete for QtCore, QtGui, QtWidgets, QtCharts, QtMultimedia, QtMultimediaWidgets, QtNetwork, QtPrintSupport, QtSpatialAudio, QtSvg, QtWebChannel, QtWebEngine, QScintilla, and others. There is support for slots/signals, subclassing, custom widgets, async via Qt, etc., but the bindings may be immature or unstable in some ways. It is fairly easy to encounter segmentation faults with improper handling. Q3 of the [FAQ](#faq) is a decent entry point for newcomers. Please try out the library and start a [discussion](https://github.com/rcalixte/libqt6c/discussions) if you have any questions or issues relevant to this library.

---

TABLE OF CONTENTS
-----------------

- [Supported Platforms](#supported-platforms)
- [License](#license)
- [Examples](#examples)
- [Building](#building)
- [Usage](#usage)
- [FAQ](#faq)
- [Special Thanks](#special-thanks)

Supported platforms
-------------------

| OS      | Arch   | Linkage (Bindings) | Status  |
| ------- | ------ | ------------------ | ------- |
| FreeBSD | x86_64 | Static             | ✅ Works |
| Linux   | arm64  | Static             | ✅ Works |
| Linux   | x86_64 | Static             | ✅ Works |

License
-------

The `libqt6c` bindings are licensed under the MIT license.

You must also meet your Qt license obligations.

Examples
--------

The [`helloworld`](https://github.com/rcalixte/libqt6c-examples/tree/master/src/helloworld/main.c) example follows:

```c
#include <libqt6c.h>
#include <stdint.h>
#include <stdio.h>

#define BUFFER_SIZE 64

static long counter = 0;

void button_callback(void* self) {
    counter++;
    char buffer[BUFFER_SIZE];
    snprintf(buffer, BUFFER_SIZE, "You have clicked the button %ld time(s)", counter);
    q_pushbutton_set_text(self, buffer);
}

int main(int argc, char* argv[]) {
    // Initialize Qt application
    q_application_new(&argc, argv);

    QWidget* widget = q_widget_new2();
    if (!widget) {
        // we can use assert or check for null to simulate exception handling
        // assert(widget != NULL);
        fprintf(stderr, "Failed to create widget\n");
        return 1;
    }

    // We don't need to free the button, it's a child of the widget
    QPushButton* button = q_pushbutton_new5("Hello world!", widget);
    if (!button) {
        fprintf(stderr, "Failed to create button\n");
        return 1;
    }

    q_pushbutton_set_fixed_width(button, 320);
    q_pushbutton_on_clicked(button, button_callback);
    q_widget_show(widget);

    int result = q_application_exec();
    q_widget_delete(widget);

    printf("OK!\n");

    return result;
}
```

Full examples are available in the [`libqt6c-examples`](https://github.com/rcalixte/libqt6c-examples) repository.

Building
--------

FreeBSD (native)
----------------

- *Tested with FreeBSD 14 / Qt 6.8 / GCC 13*

For dynamic linking with the Qt 6 system libraries:

```bash
sudo pkg install qt6-base qt6-charts qt6-multimedia qt6-pdf qt6-svg qt6-webchannel qt6-webengine qscintilla2-qt6 zig
```

> [!NOTE]
> The `zig` package may need to be downloaded or compiled and installed separately if the latest stable version is not available in the default repositories.

Linux (native)
--------------

- *Tested with Debian 12 + 13 / Qt 6.4 + 6.8 / GCC 12 + 14*

- *Tested with Linux Mint 22 / Qt 6.4 / GCC 13*

- *Tested with Ubuntu 24.04 / Qt 6.4 / GCC 13*

- *Tested with Fedora 41 / Qt 6.8 / GCC 14*

- *Tested with EndeavourOS Mercury / Qt 6.8 / GCC 14*

For dynamic linking with the Qt 6 system libraries:

- __Debian-based distributions__:

```bash
sudo apt install qt6-base-dev libqscintilla2-qt6-dev qt6-base-private-dev qt6-charts-dev qt6-multimedia-dev qt6-pdf-dev qt6-svg-dev qt6-webchannel-dev qt6-webengine-dev
```

> [!NOTE]
> The `zig` package must be downloaded and installed separately.

- __Fedora-based distributions__:

```bash
sudo dnf install qt6-qtbase-devel qscintilla-qt6-devel qt6-qtcharts-devel qt6-qtmultimedia-devel qt6-qtpdf-devel qt6-qtsvg-devel qt6-qtwebchannel-devel qt6-qtwebengine-devel zig
```

> [!NOTE]
> The `zig` package will need to be downloaded and installed separately if the latest stable version is not available in the default repositories.

- __Arch-based distributions__:

```bash
sudo pacman -S qt6-base qscintilla-qt6 qt6-charts qt6-multimedia qt6-svg qt6-webchannel qt6-webengine zig
```

Once the required packages are installed, the library can be built from the root of the repository:

```bash
zig build
```

Users of Arch-based distributions need to __make sure that all packages are up-to-date__ first and will need to add the following option to support successful compilation:

```bash
zig build -Denable-workaround
```

The compiled libraries can be installed to the system in a non-default location by adding the `--prefix-lib-dir` option to the build command:

```bash
sudo zig build --prefix-lib-dir /usr/local/lib/libqt6c # creates /usr/local/lib/libqt6c/{libraries}
```

To skip the restricted extras:

```bash
zig build -Dskip-restricted
```

To see the full list of build options available:

```bash
zig build --help
```

Usage
-----

- If using Zig's build system, import the library into your project:

```bash
zig fetch --save git+https://github.com/rcalixte/libqt6c
```

Append `#<tag>`, `#<commit>`, or `#<branch>` to the end of the URL to pin to a specific version of the library.

- Add the library to your `build.zig` file:

```zig
const qt6c = b.dependency("libqt6c", .{
    .target = target,
    .optimize = .ReleaseFast,
});

// After defining the executable, add the include path from the library
exe.root_module.addIncludePath(qt6c.path("include"));

// Link the compiled libqt6c libraries to the executable
// qt_lib_name is the name of the target library without prefix and suffix, e.g. qapplication, qwidget, etc.
exe.root_module.linkLibrary(qt6c.artifact(qt_lib_name));
```

__Extra options are required for building on Arch-based distributions. Refer to the build system at the examples link below for more details.__

- Use the library in your code:

```c
// the main qt6 header to import (C ABI Qt typedefs are included)
#include <libqt6c.h>
```

Full examples of the build system and sample applications can be found in the [`libqt6c-examples`](https://github.com/rcalixte/libqt6c-examples) repository. Cross-compilation is not supported by this library at this time.

FAQ
---

### Q1. Can I release a proprietary, commercial app with this binding?

Yes. You must also meet your Qt license obligations: either dynamically link Qt library files under the LGPL or purchase a Qt commercial license for static linking.

### Q2. How long does it take to compile?

Under normal conditions, the first compilation of the entire library should take less than 10 minutes, assuming the hardware in use is at or above the level of that of a consumer-grade mid-tier machine released in the past decade. Once the build cache is warmed up, subsequent compilations should be very fast, on the order of seconds. For client applications that use and configure a specific subset of the main library, the expected compilation time should be much shorter, e.g. compiling the `helloworld` example, only linking the libraries needed and without a warm cache, should take under 30 seconds. This assumes the Zig build system is being used.

### Q3. How does the `libqt6c` API differ from the official Qt C++ API?

Supported Qt C++ class methods are implemented 1:1 as C functions where the function names in C correspond to the snake_case equivalent of the combined Qt C++ class and method names, with the `Q` prefix altered to `q_`. [The official Qt documentation](https://doc.qt.io/qt-6/classes.html) should be used for reference and is included in the library wrapper header code (though not all links are guaranteed to work perfectly, nor is this functionality in scope for this project). Some of the main concepts are described below with a table of code equivalents following for reference.

- `QWidget::show()` is projected as `q_widget_show(void*)`
- `QPushButton::setText(QString)` is projected as `q_pushbutton_set_text(void*, const char*)`

As a mental model, developers consuming this library should keep in mind that there are essentially two different tracks of memory management required for clean operation: one for the C++ side and one for the C side. The C side is managed by the developer and the C++ side has variant ownership semantics. Ownership semantics are documented throughout the [C++ documentation](https://doc.qt.io/qt-6/topics-core.html).

The library tries to adhere to idiomatic C where possible but is still bound by the complexity of the Qt C++ API. Knowledge of the Qt C++ API is required to understand and make full use of the library. While not an exhaustive list, there are some key topics to understand:

- [Qt object ownership](https://doc.qt.io/qt-6/objecttrees.html)
- [Qt signals and slots](https://doc.qt.io/qt-6/signalsandslots.html)
- [Qt's property system](https://doc.qt.io/qt-6/properties.html)
- [Qt's Meta-Object system](https://doc.qt.io/qt-6/metaobjects.html)
- [Qt widgets](https://doc.qt.io/qt-6/examples-widgets.html)

The `QByteArray` and `QString` types are projected as plain C types available within the standard library: `char*` and `const char*`. The `QList<T>` and `QVector<T>` types are projected as `T**` or `T*[]` when used as an input parameter and supported by the helper library as `libqt_list<T>` when used as a return type. The `QMap<K,V>` and `QHash<K,V>` types are supported by the helper library as `libqt_map<K,V>` but are limited beyond basic capacities with no goal of feature expansion beyond the functionality required for adequate operation in the library. Consumers of this library are free to use types from other libraries as well, especially for hash types. The [included helper library](https://github.com/rcalixte/libqt6c/blob/master/include/qtlibc.h) is not meant to be robust but to provide containers and functions for porting the Qt C++ API to a consumable C ABI API, however there are convenience macros and functions available for use. By default, this library does not expose the raw C ABI bindings and instead only makes the wrapper constructs and C ABI pointer types for the Qt C++ API available. Therefore, it is not possible call the raw C ABI or any of the Qt type's methods and some C equivalent method from the wrappers must be used instead. This library was constructed with the goal of enabling single-language application development. Anything beyond that boundary is up to the developer to implement.

- C string types are internally converted to `QString` using `QString::fromUtf8`. Therefore, the C string input must be UTF-8 to avoid [mojibake](https://en.wikipedia.org/wiki/Mojibake). If the C input string contains binary data, the conversion would corrupt such bytes into U+FFFD (�). On return to C space, this becomes `\xEF\xBF\xBD`.

- The `libqt6c` library does not extend the C standard library and therefore it is up to the developer to provide their own functions for complex types like `QMap` and `QHash` beyond the scope of the helper library's containers.

Where Qt returns a C++ object by value (e.g. `QSize`), the binding may have moved it to the heap, and in C, this may be represented as a pointer type. In such cases, the caller is the owner and must free the object (using either `_delete` methods for the type or deallocation with `free`, `libqt_string_free`, etc.). This means code using `libqt6c` can look similar to the Qt C++ equivalent code but with the addition of proper memory management.

The `connect(targetObject, SIGNAL(signal()), targetSlot, SLOT(slot()))` methods are projected as `_on_signal(targetObject, slot)`. While the parameters in the methods themselves are more convenient to use, the documentation comments in the C header code should be used for reference for the proper usage of the parameter types and Qt vtable references. The example code above includes a simple callback function that can be used as a reference.

- You can also override virtual methods like `paint_event` in the same way. Where supported, there are additional `_on_` and `_qbase_` variants:
  - `on_paint_event`: Set an override callback function to be called when `paint_event` is invoked. For certain methods, even with the override set, the base class implementation can still be called by Qt internally and these calls can not be prevented.
  - `qbase_paint_event`: Invoke the base class implementation of `paint_event`. This is useful for when the custom implementation requires the base class implementation. (When there is no override set, the `qbase_paint_event` implementation is equivalent to `paint_event`.)

Qt class inherited types are projected via void pointers and type casting in C. For example, to pass a `QLabel* myLabel` to a function taking only the `QWidget*` base class, it should be sufficient to pass `myLabel` and the library will automatically cast it to the correct type and Qt vtable reference.

- When a Qt subclass adds a method overload (e.g. `QMenu::sizeHint(QMenu*)` vs `QWidget::sizeHint(QWidget*)`), the base class version is shadowed and can only be called via `q_widget_size_hint(void*)` while the subclass implementation can be called directly, e.g. `q_menu_size_hint(void*)`. Inherited methods are shadowed for convenience as well, e.g. `q_menu_show(void*)` is equivalent to `q_widget_show(void*)`. While the library aims to simplify usage, consideration should still be given to the Qt documentation for the proper usage of the parameter types and Qt vtable references.

Qt expects fixed OS threads to be used for each QObject. When you first call `q_application_new`, that will be considered the [Qt main thread](https://doc.qt.io/qt-6/thread-basics.html#gui-thread-and-worker-thread).

- When accessing Qt objects from inside another thread, it's safest to use `q_threading_async` to access the Qt objects from Qt's main thread. The [Threading library](https://github.com/rcalixte/libqt6c/tree/master/src/threading/libqt6cthreading.h) documents additional available strategies within the header code.

Qt C++ enums are projected as PascalCase C typedef enums, replacing namespace indicators from C++ (`::`) with underscores and where enum values are represented by the uppercase equivalent of the Qt C++ class name, enum name, and enum value, with casing exceptions for the values for `Qt::Key` and `QsciLexerRuby::PercentString*`. For example, `Qt::AlignmentFlag` is projected as a C enum typedef of `Qt__AlignmentFlag` with values prefixed by `QT_ALIGNMENTFLAG`. Enums are not strongly typed in their definitions but are currently typed as `int64_t` parameters or return types by the C API.

#### API at a glance

##### Objects

```cpp
// Qt 6 C++ API
QWidget* widget = new QWidget();
widget->setWindowTitle("Hello world!");
widget->show();

delete widget;
```

```c
// libqt6c API
QWidget* widget = q_widget_new2();
q_widget_set_window_title(widget, "Hello world!");
q_widget_show(widget);

q_widget_delete(widget);
```

##### Signals/slots

```cpp
// Qt 6 C++ API
connect(widget, &QWidget::customEvent, this, &MyClass::onCustomEvent);
```

```c
// libqt6c API
q_widget_on_custom_event(widget, on_custom_event);
```

##### Enums

```cpp
// Qt 6 C++ API
Qt::AlignmentFlag alignment = Qt::AlignLeft | Qt::AlignTop;
```

```c
// libqt6c API
Qt__AlignmentFlag alignment = QT_ALIGNMENTFLAG_ALIGNLEFT | QT_ALIGNMENTFLAG_ALIGNTOP;
```

Some C++ idioms that were difficult to project were omitted from the binding. This can be improved in the future.

### Q4. What build modes are supported by the library's build system?

Currently, only `ReleaseFast`, `ReleaseSafe`, and `ReleaseSmall` are supported. The `Debug` build mode is not supported. This may change in the future. The default build mode is `ReleaseFast`. To change the build mode:

```bash
zig build -Doptimize=ReleaseSafe
```

or

```bash
zig build --release=safe
```

### Q5. Can I use another build system?

In theory, any build system that supports both C and C++ should work. However, this has only been lightly tested and is therefore unsupported and left as an exercise for the interested reader.

### Q6. Can I use Qt Designer and the Qt Resource system?

MIQT (the upstream Qt bindings for Go) has a custom implementation of Qt `uic` and `rcc` tools, to allow using [Qt Designer](https://doc.qt.io/qt-6/qtdesigner-manual.html) for form design and resource management. There is work in progress to support Qt Designer with this library in the future.

### Q7. How can I add bindings for another Qt library?

Fork this repository and add your library to the `genbindings/config-libraries` file. [Read more »](cmd/genbindings/README.md)

Special Thanks
--------------

- [@mappu](https://github.com/mappu) for the [MIQT](https://github.com/mappu/miqt) bindings that provided the phenomenal foundation for this project

- [@arnetheduck](https://github.com/arnetheduck) for proving the value of collaboration on the back-end of this project while working across different target languages
