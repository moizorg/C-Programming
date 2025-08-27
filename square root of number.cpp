#include <stdio.h>
#include <math.h>
int main()
{
    double x = 0.0, square_root = 0.0;
    printf("Enter a number >");
    scanf("%lf", &x);
    if (x > 0)
        square_root = sqrt(x);
    return 0;
}    
