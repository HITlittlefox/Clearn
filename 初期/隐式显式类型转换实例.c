//
// Created by 96361 on 2023/5/17.
//
#include <stdio.h>

int main() {
    int i = 10;
    float f = 3.14;
    double d1 = i + f; // 隐式将int类型转换为double类型
    printf("%d", d1);

    printf("\n");

    double d2 = 3.14159;
    int i2 = (int) d2; // 显式将double类型转换为int类型
    printf("%i", i2);

    return 0;
}
