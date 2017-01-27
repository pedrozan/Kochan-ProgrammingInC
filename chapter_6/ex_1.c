#include <stdio.h>

int example1(void) {
    int number;

    printf ("Type in your number: ");
    scanf ("%i", &number);

    if ( number < 0 )
        number = -number;

    printf ("The absolute value is %i\n", number);

    return 0;
}

int example2(void) {
    int     numberOfGrades, i, grade;
    int     gradeTotal = 0;
    int     failureCount = 0;
    float   average;

    printf ("How many grades will you be entering? ");
    scanf ("%i", &numberOfGrades);

    for ( i = 1; i <= numberOfGrades; ++i ) {
        printf ("Enter grade #%i: ", i);
        scanf ("%i", &grade);

        gradeTotal = gradeTotal + grade;

        if ( grade < 65 )
            ++failureCount;
    }

    average = (float) gradeTotal / numberOfGrades;
    printf ("\nGrade average = %.2f\n", average);
    printf ("Number of failures = %i\n", failureCount);

    return 0;
}

int example3(void) {
    int number_to_test, remainder;

    printf ("Enter your number to be tested.: ");
    scanf ("%i", &number_to_test);

    remainder = number_to_test % 2;
    if ( remainder == 0 )
        printf ("The number is even.\n");
    if ( remainder != 0 )
        printf ("The number is odd.\n");

    return 0;
}

int example4(void) {
    int number_to_test, remainder;

    printf ("Enter your number to be tested: ");
    scanf ("%i", &number_to_test);

    remainder = number_to_test % 2;
    if ( remainder == 0 )
        printf ("The number is even.\n");
    else
        printf ("The number is odd.\n");

    return 0;
}

int example5(void) {
    int year, rem_4, rem_100, rem_400;

    printf ("Enter the year to be tested: ");
    scanf ("%i", &year);

    rem_4 = year % 4;
    rem_100 = year % 100;
    rem_400 = year % 400;

    if ( (rem_4 == 0 && rem_100 != 0) || rem_400 == 0 )
        printf ("It's a leap year.\n");
    else
        printf ("Nope, it's not a leap year.\n");

    return 0;
}

int example6(void) {
    int number, sign;

    printf ("Please type in a number: ");
    scanf ("%i", &number);

    if ( number < 0 )
        sign = -1;
    else if ( number == 0 )
        sign = 0;
    else
        // Must be positive
        sign = 1;

    printf ("Sign = %i\n", sign);

    return 0;
}

int example7(void) {
    char c;

    printf ("Enter a single character:\n");
    scanf ("%c", &c);

    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        printf ("It's an alphabetic character.\n");
    else if ( c >= '0' && c <= '9' )
        printf ("It's a digit.\n");
    else
        printf ("It's a special character.\n");

    return 0;
}

int example8(void) {
    float value1, value2;
    char operator;

    printf ("Type in your expression.\n");
    scanf ("%f %c %f", &value1, &operator, &value2);

    if ( operator == '+' )
        printf ("%.2f\n", value1 + value2);
    else if ( operator == '-' )
        printf ("%.2f\n", value1 - value2);
    else if ( operator == '*' )
        printf ("%.2f\n", value1 * value2);
    else if ( operator == '/' )
        if ( value2 == 0 )
            printf ("Division by zero.\n");
        else
            printf ("%.2f\n", value1 / value2);

    return 0;
}

int example9(void) {
    float value1, value2;
    char operator;

    printf ("Type in your expression.\n");
    scanf ("%f %c %f", &value1, &operator, &value2);

    switch (operator)
    {
        case '+':
            printf ("%.2f\n", value1 + value2);
            break;
        case '-':
            printf ("%.2f\n", value1 - value2);
            break;
        case '*':
            printf ("%.2f\n", value1 * value2);
            break;
        case '/':
            if ( value2 == 0 )
                printf ("Division by zero.\n");
            else
                printf ("%.2f\n", value1 / value2);
            break;
        default:
            printf ("Unknown operator.\n");
        break;
    }

    return 0;
}

int example10(void) {
    int p, d;
    _Bool isPrime;

    for ( p = 2; p <= 50; ++p ) {
        isPrime = 1;
        for ( d = 2; d < p; ++d )
            if ( p % d == 0 )
                isPrime = 0;

            if ( isPrime != 0 )
                printf ("%i ", p);
    }
    printf ("\n");

    return 0;
}

int main(void) {
    example10();

    return 0;
}
