#include <stdio.h>

int main() {
    FILE *fp;
    char name[50] = "Abdullah";
    char phone[20];
    int n, i;

    fp = fopen("Contacts.txt", "w"); // Open file for writing
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("How many contacts do you want to save? ");
    scanf("%d", &n);
    getchar(); // Clear newline left by scanf

    for (i = 0; i < n; i++) {
        // Name is fixed as Abdullah
        printf("Enter phone number for Abdullah: ");
        fgets(phone, sizeof(phone), stdin);

        // Remove newline from phone if present
        for (int j = 0; phone[j] != '\0'; j++) {
            if (phone[j] == '\n') {
                phone[j] = '\0';
                break;
            }
        }

        fprintf(fp, "Name: %s, Phone: %s\n", name, phone);
    }

    fclose(fp);
    printf("Contacts saved successfully in Contacts.txt\n");

    return 0;
}
