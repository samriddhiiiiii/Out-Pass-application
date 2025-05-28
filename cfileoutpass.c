#include <stdio.h>
#include <string.h>

int main() {
    char name[50], rollNo[20], reason[100];
    int hours;

    printf("====== AMITY UNIVERSITY OUTPASS FORM ======\n");

    // Get user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your roll number: ");
    fgets(rollNo, sizeof(rollNo), stdin);

    printf("Enter reason for leaving: ");
    fgets(reason, sizeof(reason), stdin);

    printf("Enter number of hours you will be outside: ");
    scanf("%d", &hours);

    // Decision logic using if-else
    if (hours <= 3) {
        printf("\n✅ Outpass Approved.\n");
    } else {
        printf("\n❌ Outpass Rejected. You can only go out for up to 3 hours.\n");
    }

    return 0;
}

