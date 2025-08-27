#include <stdio.h>
void Counter(void);
int nCount = 0;
int main()
{
    for(int n = 0;n <= 10;n += 2)
        Counter();
return 0;
}
void Counter(void){
    nCounter++;
}
