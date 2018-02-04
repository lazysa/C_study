#include <stdio.h>

/*
Test usage of function 
*/

/*
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

*/

// 演示函数的作用域
// 声明交换函数
void swap(int argc, char *argv[]);

int main(int x, int y) 
{
    int x = 1;
    int y = 2;

    printf("x is %d\n", x);
    printf("y is %d\n", y)
    printf("Swapping...\n");
    swap(x, y);
    printf("Swapped!\n");
    printf("x is %d\n", x);
    printf("y is %d\n", y);
}

void swap(int a , int b) 
{
    int tmp = a;
    a = b; 
    b = tmp;
    printf("a=%d\n", a);
    printf("b=%d\n", b); 
}