#include <stdio.h>

int main()
{
    int a = 21;
    int c;

    c = a;
    printf("Line 1 - =  运算符实例，c 的值 = %d\n", c);

    c += a;
    printf("Line 2 - += 运算符实例，c 的值 = %d\n", c);

    c -= a;
    printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c);

    c *= a;
    printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c);

    c /= a;
    printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c);

    c = 200;
    c %= a;
    printf("Line 6 - %%= 运算符实例，c 的值 = %d\n", c);

    c <<= 2; // 对一个数左移1位就是乘以2，左移n位就是乘以2的n次方，也就是11的2次方
    printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c);

    c >>= 2; // 右移n位就是除以2的n次方，当得到的商不是整数时会往小取整，也就是4除以2的2次方
    printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c);

    c &= 2; // 11的二进制 1011 & 2的二进制 10
    // 1011 & 0010 = 0010 的十进制是2
    printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c);

    c ^= 2; // 2 的二进制 10
    // 10 ^ 10 = 0 0  非运算
    printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c);

    c |= 2; // 2 的二进制 10
    // 10 | 00 = 10 十进制是2
    printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c);
}