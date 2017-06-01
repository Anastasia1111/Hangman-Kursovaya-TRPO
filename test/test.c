#include "deposit.h"
#include "ctest.h"
 
 
 CTEST(VictoryTests, win)
 {
     const int result = YouWin (1,1);
     const int expected = 1;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(GameOverTests, lose)
 {
     const int result = swit (11);
     const int expected = 11;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(MoreBlockTests, goodDataPass103)
 {
     const int result = sravnenie(200,200000);
     const int expected = 201600;
     ASSERT_EQUAL(expected, result);
 }
