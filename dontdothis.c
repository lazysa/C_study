#include <stdio.h>

// 演示内存段错误 (内存地址互相覆盖，最终程序奔溃)

int main (void) {
    foo();
}

void foo(void) {
    foo(); 
}