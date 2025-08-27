#include <stdio.h>
#include <conio.h>

int main(void) {
    FILE *ptrFile;
    char ch;
    int line = 3;

    clrscr();

    ptrFile = fopen("d:\\contacts.txt", "r");
    if (ptrFile == NULL) {
        printf("Cannot open file");
    } else {
        // Headers
        printf("NAME\n");
        printf("Phone#\n");
        printf("--------------------------------------------------------\n");

        // Print file contents directly
        while ((ch = getc(ptrFile)) != EOF) {
            putchar(ch); // Print each character as stored in file
        }
    }

    fclose(ptrFile);
    getch();
    return 0;
}
