#include<stdio.h>
int main()
{
    int sum = 0, marks, total_students = 0;
    float average;
    do{
        printf("Enter marks of the student (or any -ve number to qit) >");
        scanf("%d", &marks);
        if (marks >= 0){
            total_students++;
            sum += marks;
        )
    }while(marks >= 0);
    if (total_students > 0){
        average = sum / (float)total_students;
        printf("The average marks of the class are :%f\n", average);
    }
    else
        printf("Please enter the marks of al least one student to calculate average\n");
return 0;
}
        
