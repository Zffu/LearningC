#include <stdio.h>

/**
 * <p>Calculates the output based on the user's input.
 */
int calculate(int firstNumber, int secondNumber, int operation) {
    switch(operation) {
        case 0:
            return firstNumber + secondNumber;
    }
    return -1;
}

/**
 * Common calculator example (I had no inspiration of other stuff to code.)
 */

int main() {    
    int output = calculate(10,5,0);
    printf("Output is %d", output);
}