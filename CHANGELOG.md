
### 6.8.2 rev9 (19 August 2025)

* Add [Qt SQL](https://doc.qt.io/qt-6/qtsql-index.html) (#28)

### 6.8.2 rev8 (18 August 2025)

* **BREAKING CHANGE:** Add specific enum type resolution (#27)
* Fix enum handling in certain conditions, memory allocations, and scoped class cases (#26)

### 6.8.2 rev7 (15 August 2025)

* **BREAKING CHANGE:** Switch to per-library options in some cases

### 6.8.2 rev6 (14 August 2025)

* Update documentation comments and improve library memory management (#25)
* Optimize external command processing by batching files (#24)

### 6.8.2 rev5 (3 August 2025)

* Add qrc-c and uic-c for use with the Qt Resource System (#23)
* Replace brute force resolutions with data structures (#21)
* Update vtable information in documentation comments (#20)
* Add library support for Homebrew on macOS

### 6.8.2 rev4 (18 July 2025)

* **BREAKING CHANGE:** Update container type invocations and unblock QVariantList (#17)
* Update documentation URL for operator methods (#16)

### 6.8.2 rev3 (15 July 2025)

* Add projection for iterator types (#15)

### 6.8.2 rev2 (14 July 2025)

* **BREAKING CHANGE:** Remove non-digit method overloads (#14)
* Add convenience macro and function to helper library

### 6.8.2 rev1 (6 July 2025)

* **BREAKING CHANGE:** Update to Qt 6.8 base (#13)

### 6.4.2 rev13 (3 July 2025)

* **BREAKING CHANGE:** Switch enum workarounds to remove uppercasing (#12)
* Remove ineffectual const return type
* Add QStringList null terminator

### 6.4.2 rev12 (16 June 2025)

* Allow virtual classes for QAccessibleObject and QAccessibleWidget (#11)

### 6.4.2 rev11 (14 June 2025)

* Leverage consistent constness in internal library (#10)

### 6.4.2 rev10 (31 May 2025)

* Breaking changes/improvements (#9)
  * Add private signals
  * Use consistent constness
  * Revamp virtual subclass design
  * Improve documentation URLs
  * Use `libqt_list` in place of existing types (except `char*` types)
  * Remove dead code
  * See examples for user-facing API changes

### 6.4.2 rev9 (3 May 2025)

* Fix projection of QAnyStringView (#8)

### 6.4.2 rev8 (20 April 2025)

* Add [Qt PDF](https://doc.qt.io/qt-6/qtpdf-index.html) (#7)

### 6.4.2 rev7 (14 April 2025)

* Revamp attempt at Windows support

### 6.4.2 rev6 (11 April 2025)

* Qt 6.9: Return type for QObjectData::dynamicMetaObject is now const (#6)

### 6.4.2 rev5 (31 March 2025)

* Move documentation comments from source to headers (#5)

### 6.4.2 rev4 (31 March 2025)

* **BREAKING CHANGE:** Mark Qt Charts restricted (#4)

### 6.4.2 rev3 (30 March 2025)

* Add [Qt Charts](https://doc.qt.io/qt-6/qtcharts-index.html) (#3)

### 6.4.2 rev2 (23 March 2025)

* **BREAKING CHANGE:** Removing `QHostAddress_IsInSubnetWithSubnet` (#2)
  * This is generating an undefined symbol error when linked during compilation.

### 6.4.2 rev1 (7 March 2025)

* Initial release
