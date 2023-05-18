#include <stdio.h>

// VScode调用其他函数，需要引用其文件
#include "support.c"

int count;
extern void write_extern();

int main()
{
	count = 5;
	write_extern();
}
