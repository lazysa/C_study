#include <stdio.h>

/*
// 打印C语言数据类型占用的空间大小(byte) 
*/

int main (void)
{
    char c;
    double d;
    float f;
    int i;
    long l;
    long long ll;

printf("char size: %d byte\n", sizeof(c));
printf("double size: %d byte\n", sizeof(d));
printf("float size: %d byte\n", sizeof(f));
printf("int size: %d byte\n", sizeof(i));
printf("long size: %d byte\n", sizeof(l));
printf("long long size: %d byte\n", sizeof(ll));
}