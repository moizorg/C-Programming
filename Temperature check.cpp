#include <stdio.h>

int main() {
    float temp;
    
    printf("Enter the temperature: ");
    scanf("%f", &temp);
    
    if(temp > 35) {
        printf("Hot day\n");
    }
    else if(temp >= 25 && temp <= 35) {
        printf("Pleasant day\n");
    }
    else {
        printf("Cool day\n");
    }
    
    return 0;
}
