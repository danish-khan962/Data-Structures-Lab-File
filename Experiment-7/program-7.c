//Program to perform operations on matrix
#include <stdio.h>
void matrixOp(int r, int c, int mat1[2][2], int mat2[2][2], int result[2][2], int op) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            result[i][j] = (op == 1) ? mat1[i][j] + mat2[i][j] : mat1[i][j] - mat2[i][j];
}
void matrixMultiply(int r, int c, int mat1[2][2], int mat2[2][2], int result[2][2]) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];
        }
}
int main() {
    int r = 2, c = 2, op;
    int mat1[2][2] = {{1, 2}, {3, 4}}, mat2[2][2] = {{5, 6}, {7, 8}}, result[2][2];

    printf("Choose operation: 1. Add  2. Subtract  3. Multiply\n");
    scanf("%d", &op);

    if (op == 3)
        matrixMultiply(r, c, mat1, mat2, result);
    else
        matrixOp(r, c, mat1, mat2, result, op);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}
