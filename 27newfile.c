#include <stdio.h>

int main() {
    int age, id;

    // Get age input
    printf("Enter your age: ");
    scanf("%d", &age);

    // Validate age
    if (age >= 18) {
        printf("Age is valid\n");

        // Get ID input
        printf("Enter your id: ");
        scanf("%d", &id);

        // Validate ID
        if (id == 9142) {
            printf("Entry allowed\n");
        } else {
            printf("Wrong ID\n");
        }
    } else {
        printf("Underage - entry denied\n");
    }

    return 0;
}
