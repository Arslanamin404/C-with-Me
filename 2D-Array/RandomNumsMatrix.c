/*
****** THIS PROGRAM WILL GENERATE A MATRIX OF RANDOM UNIQUE NUMBERS******
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isDuplicate(int array[][3], int row, int col, int num) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (array[i][j] == num) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    srand(time(NULL));
    int num;
    int row,col;
    printf("Enter rows and cols: ");
    scanf("%d %d", &row,&col);
    int totalElements = row*col;
    int arr[3][3];
    int i, j, k = 1;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            do {
                num = rand() % totalElements + 1;
            } while (isDuplicate(arr, row, col, num));

            arr[i][j] = num;
        }
    }


    printf("The matrix with the generated unique numbers:\n");
 
    printf("--------------------------\n");
       for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("  %d   |", arr[i][j]);
        }
        printf("\n");
    }
   printf("--------------------------\n");

    return 0;
}
