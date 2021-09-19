#include<time.h>
#include<stdio.h>
#include<stdlib.h>

#include"mathtest.h"

int main()
{
   //needed to create a random number
   time_t t;
   srand((unsigned)time(&t));
   int rNuma = rand();
   int rNumb = rand();
   int answer;
   answer = addNumbers(rNuma, rNumb);
   printf("%d + %d = %d \n",rNuma,rNumb,answer);
   answer = subNumbers(rNuma, rNumb);
   printf("%d + %d = %d \n",rNuma,rNumb,answer);
    return 0;
}
