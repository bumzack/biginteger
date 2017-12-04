#include <ostream>
#include "bigint.h"

using namespace std;

void cmpTest(){
  cout << "cmp tests" << endl;
  BigInt negLarge(-32444);
  BigInt negSmall(-324);
  BigInt posLarge(32444);
  BigInt posSmall(324);
  BigInt posSame1(5544884);
  BigInt posSame2(5544884);
  BigInt posSameBut1(333333);
  BigInt posSameBut2(333331);
  BigInt negSame1(-64774);
  BigInt negSame2(64774);
  BigInt negSameBut1(-333333);
  BigInt negSameBut2(-333331);

  cout << "Expected: -1\t" << negLarge.cmp(negSmall);
  cout << "Expected: 1\t" << negSmall.cmp(negLarge);
  cout << "Expected: 1\t" << posLarge.cmp(posSmall);
  cout << "Expected: -1\t" << posSmall.cmp(posLarge); cout  << endl;
  
  cout << "Expected: -1\t" << negLarge.cmp(posSmall);
  cout << "Expected: 1\t" << posLarge.cmp(negSmall);cout  << endl;

  posSame1.cmp(posSame2); cout << "Expected: 0\t" <<  endl;
  posSame2.cmp(posSame1); cout << "Expected: 0\t" <<  endl;
  posSameBut1.cmp(posSameBut2); cout << "Expected: 1\t" <<  endl;
  posSameBut2.cmp(posSameBut1); cout << "Expected: -1\t" <<  endl << endl;

  negSame1.cmp(negSame2); cout << "Expected: 0\t" <<  endl;
  negSame2.cmp(negSame1); cout << "Expected: 0\t" <<  endl;
  negSameBut1.cmp(negSameBut2); cout << "Expected: -1\t" <<  endl;
  negSameBut2.cmp(negSameBut1); cout << "Expected: 1\t" <<  endl << endl;

}

int main(void) {
  /*
  BigInt x;
  long testVal = 33290000;
  BigInt y(33290);
  BigInt z(testVal);

  BigInt z1(testVal);

  unsigned short usarray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  BigInt u(usarray);

  z.cmp(z1);

  cout << "Hello World" << endl;
 */
  /* compare tests */
  cmpTest();


  return 0; 
}

