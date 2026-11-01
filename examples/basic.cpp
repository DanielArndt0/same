#include "same.h"

static_assert(same<int, int>::value, "identical types");
static_assert(!same<int, double>::value, "different types");
static_assert(!same<int, const int>::value, "qualifiers matter");

int main()
{
    return same<char, char>::value ? 0 : 1;
}
