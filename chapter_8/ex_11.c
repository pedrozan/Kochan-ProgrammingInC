#include <stdio.h>

int main(void) {
    int arraySum(int arr[], int n);
    int n = 5;
    int arr[5] = {1,2,3,4,5};

    printf("The sum of all members of the array is %i\n", arraySum(arr, n));

    return 0;
}

int arraySum(int arr[], int n)
{
    int sum = 0, i;

    for (i = 0; i < n; i++){
        sum += arr[i];
    }

    return sum;
}
