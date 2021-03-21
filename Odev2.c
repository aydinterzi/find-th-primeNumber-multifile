//Aydın Terzi 170420515

#include "stdio.h"
#include "stdlib.h"
#include "GetPrime.h"

int main(int argc, char const *argv[]) {
  if(argc>2)
    {
      printf("don't enter parameters\n");
      return 0;
    }
  uint16_t thPrimeNumber;
  printf("Enter thPrimeNumber:");
  scanf("%hd",&thPrimeNumber);
  uint64_t number= GetPrime(thPrimeNumber);
  printf("%ld\n",number);
  return 0;
}
