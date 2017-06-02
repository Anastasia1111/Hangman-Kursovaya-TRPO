
#include <ctest.h>

CTEST(arithmetic_suite, simle10a0)
{
    const int result = swit(10);

    const int expected = 10 ;
    ASSERT_EQUAL(expected, result);
}


