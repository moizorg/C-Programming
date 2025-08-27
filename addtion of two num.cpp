#include<stdio.h> 
#include<conio.h> 
int Add (int num1, int num2) ; 
void main (void) 
{ 
    int a, b ; 
    int sum ; 
    clrscr( ) ; // clears the screen 
    printf (“Enter Values for ‘a’ and ‘b’ => ”) ; 
    scanf (“%d %d”, &a, &b) ; 
    sum = Add(a, b) ; 
    printf(“%d + %d = %d”, a, b, sum) ; 
} 
int Add(int num1, int num2){
    return num1 + num2;
}
