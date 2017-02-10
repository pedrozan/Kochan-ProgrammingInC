#include <stdio.h>

/* example 1 */
void printMessage (void)
{
    printf ("Programming is fun.\n");
}

int example_1 (void)
{
    printMessage ();
    return 0;
}

/* example 2 */

int example_2 (void)
{
    printMessage ();
    printMessage ();

    return 0;
}

/* example 3 */

int example_3 (void)
{
    int  i;
    
    for ( i = 1;  i <= 5;  ++i )
        printMessage ();

    return 0;
}

/* example 4 */

void calculateTriangularNumber (int n)
{
    int i, triangularNumber = 0;

    for ( i = 1;  i <= n;  ++i )
        triangularNumber += i;

    printf ("Triangular number %i is %i\n", n, triangularNumber);
}

int example_4 (void)
{
    calculateTriangularNumber (10);
    calculateTriangularNumber (20);
    calculateTriangularNumber (50);

    return 0;
}

/* example 5 */

void gcd (int u, int v)
{
    int  temp;

    printf ("The gcd of %i and %i is ", u, v);

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf ("%i\n", u);
}

int example_5 (void)
{
    gcd (150, 35);
    gcd (1026, 405);
    gcd (83, 240);

    return 0;
}

/* example 6 */

int  gcd2 (int u, int v)
{
    int  temp;
    
    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

int example_6 (void)
{
    int  result;

    result = gcd2 (150, 35);
    printf ("The gcd of 150 and 35 is %i\n", result);
    
    result = gcd2 (1026, 405);
    printf ("The gcd of 1026 and 405 is %i\n", result);

    printf ("The gcd of 83 and 240 is %i\n", gcd2 (83, 240));

    return 0;
}

/* example 7 */

float  absoluteValue (float x)
{
    if ( x < 0 )
        x = -x;

    return x;
}

int example_7 (void)
{
    float  f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int    i1 = -716;
    float  result;

    result = absoluteValue (f1);
    printf ("result = %.2f\n", result);
    printf ("f1 = %.2f\n", f1);

    result = absoluteValue (f2) + absoluteValue (f3);
    printf ("result = %.2f\n", result);

    result = absoluteValue ( (float) i1 );
    printf ("result = %.2f\n", result);

    result = absoluteValue (i1);
    printf ("result = %.2f\n", result);
    printf ("%.2f\n", absoluteValue (-6.0) / 4 );

    return 0;
}

/* example 8 */

float  squareRoot (float x)
{
    const float  epsilon = .00001;
    float        guess   = 1.0;
    
    while  ( absoluteValue (guess * guess - x) >= epsilon )
        guess = ( x / guess + guess ) / 2.0;

    return guess;
}

int example_8 (void)
{
    printf ("squareRoot (2.0) = %f\n", squareRoot (2.0));
    printf ("squareRoot (144.0) = %f\n", squareRoot (144.0));
    printf ("squareRoot (17.5) = %f\n", squareRoot (17.5));

    return 0;
}

/* example 9 */

int  minimum (int  values[10])
{
    int  minValue, i;
    
    minValue = values[0];

    for ( i = 1;  i < 10;  ++i )
        if ( values[i] < minValue )
            minValue = values[i];

    return minValue;
}

int example_9 (void)
{
    int scores[10], i, minScore;
    int minimum (int  values[10]);

    printf ("Enter 10 scores\n");
    
    for ( i = 0;  i < 10;  ++i )
        scanf ("%i", &scores[i]);

    minScore = minimum (scores);

    printf ("\nMinimum score is %i\n", minScore);

    return 0;
}

/* example 10 */

int  minimum2 (int  values[], int  numberOfElements)
{
    int  minValue, i;

    minValue = values[0];

    for ( i = 1;  i < numberOfElements;  ++i )
        if ( values[i] < minValue )
            minValue = values[i];

    return minValue;
}

int example_10 (void)
{
    int array1[5] = { 157, -28, -37, 26, 10 };
    int array2[7] = { 12, 45, 1, 10, 5, 3, 22 };
    int minimum2 (int  values[], int  numberOfElements);

    printf ("array1 minimum: %i\n", minimum2 (array1, 5));
    printf ("array2 minimum: %i\n", minimum2 (array2, 7));

    return 0;
}

/* example 11 */

void  multiplyBy2 (float  array[], int  n)
{
    int  i;
    
    for ( i = 0;  i < n;  ++i )
        array[i] *= 2;
}

int example_11 (void)
{
    float  floatVals[4] = { 1.2f, -3.7f, 6.2f, 8.55f };
    int    i;
    void   multiplyBy2 (float  array[], int  n);

    multiplyBy2 (floatVals, 4);

    for ( i = 0;  i < 4;  ++i )
        printf ("%.2f   ", floatVals[i]);

    printf ("\n");

    return 0;
}

/* example 12 */

void  sort (int  a[], int  n)
{
    int  i, j, temp;

    for ( i = 0;  i < n - 1;  ++i )
        for ( j = i + 1;  j < n;  ++j )
            if ( a[i] > a[j] ) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int example_12 (void)
{
    int  i;
    int  array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                        44, -3, -9, 12, 17, 22, 6, 11 };
    void sort (int  a[], int  n);

    printf ("The array before the sort:\n");

    for ( i = 0;  i < 16;  ++i )
        printf ("%i ", array[i]);
        
    sort (array, 16);

    printf ("\n\nThe array after the sort:\n");

    for ( i = 0;  i < 16;  ++i )
        printf ("%i ", array[i]);

    printf ("\n");

    return 0;
}

/* example 13 */

int example_13(void)
{
    void  scalarMultiply (int  matrix[3][5], int  scalar);
    void  displayMatrix (int  matrix[3][5]);
    int   sampleMatrix[3][5] =
    {
        {  7, 16, 55, 13, 12 },
        { 12, 10, 52,  0,  7 },
        { -2,  1,  2,  4,  9 }
    };

    printf ("Original matrix:\n");
    displayMatrix (sampleMatrix);
    scalarMultiply (sampleMatrix, 2);

    printf ("\nMultiplied by 2:\n");
    displayMatrix (sampleMatrix);
    scalarMultiply (sampleMatrix, -1);

    printf ("\nThen multiplied by -1:\n");
    displayMatrix (sampleMatrix);

    return 0;
}

void  scalarMultiply (int  matrix[3][5], int  scalar)
{
    int  row, column;
    for ( row = 0;  row < 3;  ++row )
        for ( column = 0;  column < 5;  ++column )
            matrix[row][column]  *=  scalar;
}

void  displayMatrix (int  matrix[3][5])
{
    int   row, column;

    for ( row = 0;  row < 3;  ++row) {
        for ( column = 0;  column < 5;  ++column )
            printf ("%5i", matrix[row][column]);

        printf ("\n");
    }
}


int main(void)
{
    example_13();
}