#include <stdio.h>
// Header statement
 
int main() {  
    char operator;      
    double num1, num2, result; 
    
    // Input the operator and two numbers
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator); 
    
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculations based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Cannot divide by zero.\n");
                return 1; // Exit with an error status
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Exit with an error status
    }

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0; // Exit successfully
}
