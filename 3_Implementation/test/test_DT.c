#include "unity.h"


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}




/* Prototypes for all the test functions */


void test_units(void){
        
        int unit 80;
  	TEST_ASSRT_EQUAL(160,units(unit));
      
}




int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_units);

return UNITY_END();
}
