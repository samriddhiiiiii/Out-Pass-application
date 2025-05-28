#include <stdio.h>

int main() {
    char name[50], rollNo[20], reason[100];
    int hours;

    printf("\n========= AMITY UNIVERSITY OUTPASS SYSTEM =========\n");

    // Taking inputs
    printf("Enter your full name        : ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your roll number      : ");
    fgets(rollNo, sizeof(rollNo), stdin);

    printf("Reason for leaving campus   : ");
    fgets(reason, sizeof(reason), stdin);

    printf("How many hours will you be out? ");
    scanf("%d", &hours);

    // Approval logic
    if (hours <= 4) {
        printf("\n✅ Outpass Approved. You may leave the campus.\n");
    } else {
        printf("\n❌ Outpass Rejected. Maximum allowed time is 4 hours.\n");
    }

    printf("====================================================\n");

    return 0;
}

