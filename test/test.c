#include<stdio.h>
#include "unity/unity.h"
#include "calc.h"

static complex a={0,0};
static complex b={0,0};
static complex c={0,0};
static complex d={0,0};
static complex result={0,0};

void setUp()
{
}
void tearDown()
{
}

void add_test(void)
{
    a.real=0;a.img=0;
    b.real=0;b.img=0;
    TEST_ASSERT_EQUAL(sum(&a,&b,&result),SUCCESS);
    TEST_ASSERT_EQUAL(0,result.real);
    TEST_ASSERT_EQUAL(0,result.img);


}
void sub_test(void)
{
}
void mul_test(void)
{

}
void div_test(void)
{

}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(add_test);
    RUN_TEST(sub_test);
    RUN_TEST(mul_test);
    RUN_TEST(div_test);
    return UNITY_END();
}