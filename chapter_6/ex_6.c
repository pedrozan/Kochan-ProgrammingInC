#include <stdio.h>

int intToEnglish(int num)
{
    switch(num)
    {
        case 0:
            printf("zero ");
            break;
        case 1:
            printf("one ");
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
    };
    return 0;
}

int power(double base, double exp)
{
    int acc = 1;
    for (int i = 1; i < exp; i++) {
        acc *= base;
    }
    return acc;
}

int count(int a)
{
    int digits = 0;

    while(a != 0) {
        a /= 10;
        digits++;
    }

    return digits;
}

int main() {
    int num, digits, remainder, current_digit, p, teen;

    printf("Enter number from -2e9 to 2e9: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("minus ");
        num *= -1;
    }
    if(num == 0) {
        printf("zero\n");
        return 0;
    }

    digits = count(num);

    for (int i = digits; i > 0; i--)
    {
        p = power(10, i);
        remainder = num % p;
        current_digit = (num - remainder)/p;
        intToEnglish(current_digit);

        num = remainder;
    }

    printf("\n");

    return 0;
}
