#include <stdio.h>
int main()
{
    int count;
    count = 10;
    do{
         printf("%d\n", count);
        count = count - 1;
    }
    while(count >= 10);
    return 0;
}
