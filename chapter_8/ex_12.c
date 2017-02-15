#include <stdio.h>

int main (void)
{
    void transposeMatrix(int matrix1[4][5], int matrix2[5][4]);

    int matrix1[4][5] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5}
    };
    int matrix2[5][4];
    int i, j;

    transposeMatrix(matrix1, matrix2);

    for ( i = 0; i < 5; i++ ){
        for ( j = 0; j < 4; j++){
            printf("%i", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void transposeMatrix(int matrix1[4][5], int matrix2[5][4])
{
    int i, j;

    for ( i = 0; i < 4; i++ ){
        for ( j = 0; j < 5; j++){
            matrix2[j][i] = matrix1[i][j];
        }
    }
}
