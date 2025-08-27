#include <stdio.h>

int main() {
    float marks, percentage;
    
    printf("Enter obtained marks (out of 1400): ");
    scanf("%f", &marks);
    
    percentage = (marks / 1400) * 100;
    
    if(percentage >= 80) {
        printf("Grade: A*\n");
    }
    else if(percentage >= 70) {
        printf("Grade: B\n");
    }
    else if(percentage >= 60) {
        printf("Grade: C\n");
    }
    else if(percentage >= 50) {
        printf("Grade: D\n");
    }
    else if(percentage >= 40) {
        printf("Grade: E\n");
    }
    else if(percentage >= 33) {
        printf("Grade: F\n");
    }
    else {
        printf("Grade: F (Fail)\n");
    }
    
    return 0;
}
