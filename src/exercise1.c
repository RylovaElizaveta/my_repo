#include <stdio.h>
#include <math.h>

int main (int argc, char** argv) {
    long long sum = 0;

    for (int i = 0; i < 10; i++) {
        double num;
        scanf("%lf", &num);
        sum += (long long)round(num * 100);
    }

    double average = (double)sum / 1000.0;
    average = round(average * 100) / 100;

    printf("%.2f\n", average);
    return 0;
}

