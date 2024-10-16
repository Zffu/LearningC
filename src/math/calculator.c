#include <stdio.h>
#include <stdlib.h>

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
 * Handles the calculator if the CLI wasn't used.
 */
inline int handleNormal() {
    printf("Calculator\n\nFirst Number: ");
    scanf("%d", &firstNumber);

    printf("\nSecond Number: ");
    scanf("%d", &secondNumber);

    printf("\nOperation (0 to 4): ");
    scanf("%d", &operation);

    printf("\n\nOutput: %d", calculate(firstNumber, secondNumber, operation));
}

/**
 * Common calculator example (I had no inspiration of other stuff to code.)
 */
int main(int argc, char *argv[]) {    

    if(argc < 3) {
        handleNormal();
        return 1;
    }

    int stack = 0; // The calculation stack (is unefficient but im learning rn)
    int operation = atoi(argv[0]);

    for(int i = 1; i < argc; i++) {
        stack = calculate(stack, atoi(argv[i]), operation);
    }

    printf("Stack Output: %d", stack);
}