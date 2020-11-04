#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a,b;
    scanf("%d %d",&a,&b);
    float c,d;
    scanf("%f %f",&c,&d);
    printf("%d %d\n%.1f %.1f",(a+b),(a-b),(c+d),(c-d));

    return 0;
}
