//
// Created by 96361 on 2023/5/17.
//
#include <stdio.h>

// �����ⶨ����� x �� y
int x;
int y;

int addtwonumcombine()
{
    // �������������� x �� y Ϊ�ⲿ����
    extern int x;
    extern int y;
    // ���ⲿ������ȫ�ֱ�����x �� y ��ֵ
    x = 1;
    y = 2;
    return x + y;
}

int main()
{
    int result;
    // ���ú��� addtwonumcombine
    result = addtwonumcombine();

    printf("result Ϊ: %d", result);
    return 0;
}