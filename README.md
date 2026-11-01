# same

A lightweight, header-only compile-time type comparison utility for C++11 and later.

same compares two template types and exposes a compile-time boolean result.

## Requirements

- C++11 or later
- CMake 3.16 or later for CMake integration

## Usage

```cpp
#include "same.h"

static_assert(same<int, int>::value, "same type");
static_assert(!same<int, double>::value, "different types");
```

For more examples and API documentation, see [Usage Documentation](docs/usage.md).

## Manual Integration

Download [same.h](https://github.com/DanielArndt0/same/blob/main/include/same.h) from the repository and add it to your project's include directory.

Include the header using `#include "same.h"`. No separate compilation is required.

## CMake Integration

same can be integrated directly from GitHub using CMake's `FetchContent` module.

Add the following to your project's `CMakeLists.txt`:

```cmake
include(FetchContent)

FetchContent_Declare(
    same
    GIT_REPOSITORY https://github.com/DanielArndt0/same.git
    GIT_TAG v1.0.0
)

FetchContent_MakeAvailable(same)

target_link_libraries(my_target PRIVATE same::same)
```

Replace `my_target` with your application's CMake target.

If you already have the same source directory inside your CMake project, you can add it instead:

```cmake
add_subdirectory(path/to/same)
target_link_libraries(my_target PRIVATE same::same)
```

same is header-only and does not require a separately compiled binary.

## Compatibility

same requires C++11 or later. It has no external dependencies.

## Disclaimer

same is developed for educational purposes and experimentation with templates. It is not intended to replace std::is_same.
