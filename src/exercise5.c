#include <stdio.h>

int main (int argc, char** argv) {
    double arr1[10][3];
    double arr2[3][10];
    double arr[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &arr1[i][j]);
        }
    }
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%lf", &arr2[i][j]);
        }
    }

     for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 3; k++) {
                arr[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%.2f ", arr[i][j]);
        }
        printf("\n");
    }

}
