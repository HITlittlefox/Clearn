//
// Created by 96361 on 2023/5/17.
//
#include <stdio.h>

int main() {
    int c;
    int a = 10;
    c = a++;
    printf("后置++先赋值后运算：\n");
    printf("Line 1 : c 的值是 %d\n", c);//10
    printf("Line 2 : a 的值是 %d\n", a);//11
    a = 10;
    c = a--;
    printf("Line 3 : c 的值是 %d\n", c);//10
    printf("Line 4 : a 的值是 %d\n", a);//9

    printf("++前置先运算后赋值：\n");
    a = 10;
    c = ++a;
    printf("Line 5 : c 的值是 %d\n", c);//11
    printf("Line 6 : a 的值是 %d\n", a);//11
    a = 10;
    c = --a;
    printf("Line 7 : c 的值是 %d\n", c);//9
    printf("Line 8 : a 的值是 %d\n", a);//9

}