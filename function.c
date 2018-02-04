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

/*
演示函数的作用域，函数不能改变传入的变量值
声明交换函数原型(局部变量和全局变量)
函数原型：也叫函数声明，告诉编译程序一个函数将接受什么样的参数，将返回什么样的返回值，编译程序就能检查对函数的调用是否正确(参数名可忽略)。
C语言编译系统是由上往下编译的，如果被调函数放在主调函数后面, 前面就该有声明，不然编译器无法识别。
*/
void swap(int a, int b);

int main(int argc, char *argv[]) 
{ 
    int x = 1;
    int y = 2;
    printf("x is %d\n", x);
    printf("y is %d\n", y);
    printf("Swapping...\n");
    swap(x, y);
    printf("Swapped!\n");
    printf("x is %d\n", x);
    printf("y is %d\n", y);
}

void swap(int a, int b) 
{
    int tmp = a;
    a = b; 
    b = tmp;
    printf("a=%d\n", a);
    printf("b=%d\n", b); 
}