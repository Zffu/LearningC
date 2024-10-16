#include <stdio.h>

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
    int output = calculate(10,5,5);
    printf("Output is %d", output);
}