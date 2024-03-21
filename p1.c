#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    int choice;

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. even or odd\n");
    printf("6. Factorial\n");
    printf("7. Sine\n");
    printf("8. Cosine\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf", &num1);
            scanf("%lf",&num2);
            printf("Result: %lf\n", num1 + num2);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf", &num1);
            scanf("%lf",&num2);
            printf("Result: %lf\n", num1 - num2);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf", &num1);
            scanf("%lf",&num2);
            printf("Result: %lf\n", num1 * num2);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf", &num1);
            scanf("%lf",&num2);
            printf("Result: %lf\n", num1 / num2);

            break;
        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if ((int)num1 % 2 == 0) {
                printf("Even\n");
            } else {
                printf("Odd\n");
            }
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 < 0) {
                printf("Factorial is not defined for negative numbers.\n");
            } else {
                int factorial_result = 1;
                for (int i = 1; i <= num1; ++i) {
                    factorial_result *= i;
                }
                printf("Result: %d\n", factorial_result);
            }
            
        break;

        case 7:
            printf("Enter an angle: ");
            scanf("%lf", &num1);
            printf("Result: %lf\n", sin(num1));
            break;
        case 8:
            printf("Enter an angle: ");
            scanf("%lf", &num1);
            printf("Result: %lf\n", cos(num1));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
