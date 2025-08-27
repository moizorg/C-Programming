#include <stdio.h>
int main()
{
    int inner;
    for(int outer = 7; outer >= 1; outer--)
    {
        inner = 1;
        while(inner <= outer)
        {
            printf("*");
            inner++;
        }
        printf("\n");
    }
    return 0;
}
