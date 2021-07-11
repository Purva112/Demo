#include "unity.h"
#include <calendar.h>

#define PROJECT_NAME  "Calendar"
void gotoxy(void);
void SetColor(void);
void display(void);
int getkey(void);
void setUp(){}

void tearDown(){}
int main()
{

  UNITY_BEGIN();
  RUN_TEST(gotoxy);
  RUN_TEST(SetColor);
  RUN_TEST(display);
  RUN_TEST(getkey);
  return UNITY_END();
}
void gotoxy(void) {
  TEST_ASSERT_EQUAL(("January","February","March","April","May","June","July","August","September","October","November","December"));
  

  TEST_ASSERT_EQUAL((else));
}

void SetColor(void) {
  TEST_ASSERT_EQUAL(("Mon","Tue","Wed","Thu","Fri","Sat","Sun"));
 
  TEST_ASSERT_EQUAL((else));
}

void display(void) {
  TEST_ASSERT_EQUAL(1945);
  
  TEST_ASSERT_EQUAL(<=1945);
}

void getkey(void) {
  TEST_ASSERT_EQUAL(31,28,31,30,31,30,31,31,30,31,30,31);

  TEST_ASSERT_EQUAL(else);
}