//
// Created by 96361 on 2023/5/17.
//
#include <stdio.h>

extern int count;

void write_extern(void) {
    printf("count is %d\n", count);
}