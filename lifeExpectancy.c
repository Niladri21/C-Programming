#include <stdio.h>

int main() {
    int age, gender, smoker, exercise;
    int expectancy = 75;

    printf("--- Simple Life Expectancy Calculator ---\n");

    printf("Enter your current age: ");
    scanf("%d", &age);

    printf("Enter your gender (1 for Male, 2 for Female): ");
    scanf("%d", &gender);

    if (gender == 2) {
        expectancy += 5;
    }

    printf("Do you smoke? (1 for Yes, 0 for No): ");
    scanf("%d", &smoker);

    if (smoker == 1) {
        expectancy -= 5;
    }

    printf("Do you exercise regularly? (1 for Yes, 0 for No): ");
    scanf("%d", &exercise);

    if (exercise == 1) {
        expectancy += 5;
    }

    printf("\n--- Results ---\n");
    printf("Your estimated life expectancy is: %d years.\n", expectancy);

    if (age < expectancy) {
        printf("You have an estimated %d years remaining.\n", expectancy - age);
    } else {
        printf("You have already surpassed the average estimate! Keep it up!\n");
    }

    return 0;
}