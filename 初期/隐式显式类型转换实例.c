//
// Created by 96361 on 2023/5/17.
//
#include <stdio.h>

int main() {
    int i = 10;
    float f = 3.14;
    double d1 = i + f; // ��ʽ��int����ת��Ϊdouble����
    printf("%d", d1);

    printf("\n");

    double d2 = 3.14159;
    int i2 = (int) d2; // ��ʽ��double����ת��Ϊint����
    printf("%i", i2);

    return 0;
}
