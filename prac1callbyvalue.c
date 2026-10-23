#include <stdio.h>

void swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    printf("No1 = %d \n", a);
    printf("No2 = %d \n", b);
    return 0;
}
