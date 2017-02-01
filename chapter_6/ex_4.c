#include <stdio.h>

int main(void) {
    float acc = 0, temp;
    char operator;
    _Bool running = 1;

    printf("Begin Calculations\n");

    while (running == 1) {

        scanf("%f %c", &temp, &operator);

        switch (operator) {
            case '+':
                acc += temp;
                break;
            case '-':
                acc -= temp;
                break;
            case '*':
                acc *= temp;
                break;
            case '/':
                if(temp != 0)
                    acc /= temp;
                else
                    printf("Division by zero!\n");
                break;
            case 'S':
            case 's':
                acc = temp;
                printf("Set acumulator to ");
                break;
            case 'E':
            case 'e':
                printf("End of calculations result is ");
                running = 0;
                break;
            default:
                printf("Unknown operator\n");
        }
        printf("%.2f\n", acc);
    }

    printf("End of program\n");

    return 0;
}
