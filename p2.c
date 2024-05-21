#include <stdio.h>

int cube(int *num) {
    return (*num) * (*num) * (*num);
}

void findCubes(int *arr, int rows, int cols) {
    printf("Cubes of all elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", cube(arr + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    
    printf("Enter array's size: ");
    scanf("%d", &rows);
    cols = rows; 
    
    int arr[rows][cols];
    
    printf("\nEnter array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    findCubes(&arr[0][0], rows, cols);

}

