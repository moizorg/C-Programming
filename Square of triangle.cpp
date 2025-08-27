#include <stdio.h>

int main() {
    char choice;
    float side, base, height, area;
    
    printf("Enter 'S' for Square or 'T' for Triangle: ");
    scanf(" %c", &choice);
    
    if(choice == 'S' || choice == 's') {
        printf("Enter the side length of the square: ");
        scanf("%f", &side);
        area = side * side;
        printf("Area of square: %.2f\n", area);
    }
    else if(choice == 'T' || choice == 't') {
        printf("Enter the base and height of the triangle: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of triangle: %.2f\n", area);
    }
    else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}
