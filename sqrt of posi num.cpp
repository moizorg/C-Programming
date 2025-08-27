#include <stdio.h>
#include <math.h>
int main()
{
    float num;
    positive:
        printf("Please enter a positive number :");
        scanf("%f", &num);
        if(num < 0)
            goto positive;
        else
            printf("Square root of %0.2f is %0.2f", num, sqrt(num));
return 0;
}
