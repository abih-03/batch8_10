#include <stdio.h>

int main() {
    double number;
    double square;
    double cube;

    printf("Enter a number: ");
    scanf("%lf", &number);

    square = number * number;
    cube = number * number * number;

    printf("Square of %.2lf = %.2lf\n", number, square);
    printf("Cube of %.2lf = %.2lf\n", number, cube);

}

