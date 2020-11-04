#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int no[10]={0,0,0,0,0,0,0,0,0,0};
char str[1000];
scanf("%s",str);
for(int i=0;i<1+strlen(str);++i)
{
    if(str[i]>47 && str[i]<58)
    {
        no[str[i]-48] +=1;
    }
}
for(int i=0;i<10;++i)
printf("%d ",no[i]);
   return 0;
}
