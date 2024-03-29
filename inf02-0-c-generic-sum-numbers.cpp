/*
На стандартном потоке ввода подается последовательно вещественное число x и целое число в 16-ричной записи y.

Единственным аргументов программы является целое число z в 27-ричной системе исчисления.

Необходимо вывести вычислить значение x+y+z и вывести его на стандартный поток вывода с точностью до 3-го знака после точки.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    double x;
    int y;
    int z = strtol(argv[1], 0, 27);

    scanf("%lf %x", &x, &y);
    printf("%.3lf", x + y + z);
}