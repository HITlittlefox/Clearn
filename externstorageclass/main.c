//
// Created by 96361 on 2023/5/17.
//
#include <stdio.h>

int count;

extern void write_extern();

int main() {
    count = 5;
    write_extern();
}