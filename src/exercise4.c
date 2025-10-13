#include <stdio.h>

int main (int argc, char** argv) {
    double arr[10];


    for (int i = 0; i < 10; i++) {
        scanf("%lf", &arr[i]);
    }
    double x;
    int k;
    scanf("%le", &x);
    scanf("%d", &k);

    for (int i = 9; i > k; i--) {
        arr[i] = arr[i-1];
    }

    arr[k] = x;

    for (int i = 0; i < 10; i++) {
            printf("%.2f ", arr[i]);
    }

}
