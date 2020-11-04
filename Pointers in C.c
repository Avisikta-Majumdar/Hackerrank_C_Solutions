#include <stdio.h>

void update(int *a,int *b) {
    *a +=*b; // Because here *a = *a+*b
    *b= abs(*a-2*(*b));/* Because here *b = ((*a+*b) - 2*(*b))*/
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);//Here we are passing the address of a & b
    printf("%d\n%d", a, b);

    return 0;
}
