#include<stdio.h>
void main()
{
    int m, n;
    printf("Enter two numbers(seprated by comma) :");
    scanf("%d %d", m, n);
    m = m + 10;
    n = 5 * m;
    printf("m = %d\t\t\t n = %d\n", m, n);
}
