#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number>");
    scanf("%d", &num);
    if(num > 0)
         printf("The number is positive");
    if(num < 0)
         printf("The number is negative");
    if(num == 0)
         printf("The number is zero");
    return 0;
}          
