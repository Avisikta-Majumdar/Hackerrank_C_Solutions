#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int i,j,a_And_b=0,a_Or_b = 0,a_Xor_b =0,temp1=0,temp2=0,temp3=0;
    for(i=1;i<n;++i)
    {
        for(j=i+1;j<=n;++j)
        {
            temp1 = i&j;
            temp2 = i|j;
            temp3 = i^j;

            if(temp1>a_And_b && temp1<k)
            {
                a_And_b = temp1;
            }
            if(temp2>a_Or_b && temp2<k)
            {
                a_Or_b = temp2;
            }
            if(temp3>a_Xor_b && temp3<k)
            {
                a_Xor_b = temp3;
            }
        }
    }

 printf("%d\n%d\n%d",a_And_b,a_Or_b,a_Xor_b);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

