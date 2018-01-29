#include <stdio.h>

/*
Test usage of function 
*/

// 声明函数
int increment(int a);

// main函数的2个形式参数
int main(int argc, char *argv[]) 
{
    int x = 2;
    printf("x is now %d\n", x);
    printf("Incrementing...\n");
    x = increment(x);
    printf("Incremented!\n");
    printf("x is now %d\n", x); 
    printf("%s\n",argc);
}

int increment(int a) {
    return a + 1; 
}