#include "unity.h"
#include "calculator.h"


void setUP(){}

void tearDown(){}

void test_div(void){
    TEST_ASSERT_EQUAL(1, div(10, 10));
    TEST_ASSERT_EQUAL(0, div(10, 0));

}

int main(){

    UNITY_BEGIN();

    RUN_TEST(test_div);
    div(20, 10);
    div(10, 0);
    
    return UNITY_END();
}