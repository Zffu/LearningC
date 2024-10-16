#include <stdio.h>

int firstNumber;
int secondNumber;
int operation;

/**
 * <p>Calculates the output based on the user's input.
 */
int calculate(int firstNumber, int secondNumber, int operation) {
    switch(operation) {
        case 0:
            return firstNumber + secondNumber;
        case 1:
            return firstNumber - secondNumber;
        case 2:
            return firstNumber * secondNumber;
        case 3:
            return firstNumber / secondNumber;
        case 4:
            return firstNumber ^ secondNumber;                
    }
    printf("Invalid operation ID: %d (0 to 4 allowed!)", operation);
    return -1;
}

/**
 * Common calculator example (I had no inspiration of other stuff to code.)
 */

int main() {    
    printf("Calculator\n\nFirst Number: ");
    scanf("%d", &firstNumber);

    printf("\nSecond Number: ");
    scanf("%d", &secondNumber);

    printf("\nOperation (0 to 4): ");
    scanf("%d", &operation);

    printf("\n\nOutput: %d", calculate(firstNumber, secondNumber, operation));

}