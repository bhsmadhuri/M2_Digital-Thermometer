#include "unity.h"

#include "KeyPowerInvoice.h"
#include "PowerInvoice.h"





/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}




/* Prototypes for all the test functions */


void test_units(void){
        
        int unit=60;
  	TEST_ASSERT_EQUAL(120,units(unit));
      
}




int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_units);

return UNITY_END();
}
