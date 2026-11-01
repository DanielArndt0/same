# same Usage

`same<T, U>` compares two types at compile time.

## Compare Types

```cpp
#include "same.h"

static_assert(same<int, int>::value, "matching types");
static_assert(!same<int, double>::value, "different types");
```

`value` is a compile-time boolean. Qualifiers and references are significant:

```cpp
static_assert(!same<int, const int>::value, "different qualifiers");
static_assert(!same<int, int&>::value, "different reference types");
```

This library does not modify or normalize either type.
