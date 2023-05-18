//
// Created by 96361 on 2023/5/17.
//
#include <stdio.h>

/*定义两个全局变量*/
int x = 1;
int y = 2;

int addtwonum();

int main(void) {
    int result;
    result = addtwonum();
    printf("result 为: %d\n", result);
    return 0;
}