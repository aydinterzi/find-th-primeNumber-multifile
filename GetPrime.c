#include "GetPrime.h"
#include <stdint.h>
#include <stdio.h>
/*
@param thPrimeNumber kacinci asal sayiyi ogrenmek istiyorsak onu giriyoruz.
@return sonuc istenilen siradaki asal sayiyi doner.
*/
uint64_t GetPrime(uint16_t thPrimeNumber)
{
      uint64_t sonuc=findThPrimeNumber(thPrimeNumber);
      return sonuc;
}
int counter=0,end=9999;
int isPrime,i,j;
/*
@param thPrimeNumber kacinci asal sayiyi ogrenmek istiyorsak onu giriyoruz.
@return i istenilen siradaki asal sayiyi doner.
*/
uint64_t findThPrimeNumber(uint16_t thPrimeNumber){
for(i=2; i<=end; i++)
    {
        isPrime = 1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
        {
            counter++;
        }
        if(counter==thPrimeNumber)
          return i;
    }
    return 0;
}
