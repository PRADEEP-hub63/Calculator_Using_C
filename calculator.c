#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float num1, num2, result;
    int choice;

    while (1) {
        // Menu
        printf("\n=============================\n");
        printf("      PROFESSIONAL CALCULATOR\n");
        printf("=============================\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("=============================\n");

        // Input choice
        printf("Enter your choice (1-5): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        // Exit condition
        if (choice == 5) {
            printf("Exiting calculator. Thank you!\n");
            break;
        }

        // Validate choice
        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please select between 1-5.\n");
            continue;
        }

        // Input numbers
        printf("Enter two numbers: ");
        if (scanf("%f %f", &num1, &num2) != 2) {
            printf("Invalid input! Please enter numeric values.\n");
            while (getchar() != '\n');
            continue;
        }

        // Perform operation
        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;

            case 2:
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;

            case 3:
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;

            case 4:
                result = divide(num1, num2);
                if (num2 != 0)
                    printf("Result: %.2f\n", result);
                break;
        }
    }

    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}