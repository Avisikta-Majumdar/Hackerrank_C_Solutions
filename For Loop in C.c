#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char arr[][9] = {"one", "two" , "three", "four" , "five" , "six" , "seven" , "eight" , "nine" };
  	for(int i=a;i<b+1;++i)
      {
          if(i<10)
          {
              printf("%s\n", arr[i-1]);//Here we are printing the array value of (i-1) because the index of an array will start from 0
          }
          else if (i%2==0)//This condition only satisfied when i is even and i is greater than 9
          {
              printf("even\n");
          }
          else {//This condition only satisfied when i is odd and i is greater than 9
          printf("odd\n");
          }
      }

    return 0;
}

