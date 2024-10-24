//Program to implement sparse matrix
#include <stdio.h>
void SparseMatrix(int sparse[10][3], int size) {
    printf("Row  Column  Value\n");
    for (int i = 0; i < size; i++) {
        printf("%d     %d      %d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }
}
int main() {
    int rows, cols, count = 0;
    int matrix[10][10], sparse[10][3];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0) {
                sparse[count][0] = i;
                sparse[count][1] = j;
                sparse[count][2] = matrix[i][j];
                count++;
            }
        }
    }
    printf("Sparse Matrix Representation:\n");
    SparseMatrix(sparse, count);
    return 0;
}
