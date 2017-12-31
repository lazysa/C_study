#include <stdio.h>
#include <unistd.h>

// 对比 i++ 和 ++i 的区别
// 前缀自增操作符的优先级高于后缀自增

int main(void) 
{
    int i, a;

    i = 1;
    a = 1;
    a = i++; // 先把i=1赋值给a，再执行+1运算 
    printf("%d\t%d\n", a,i);

    i = 1;
    a = 1;
    a = ++i;  // 先用i=1执行完+1运算，再把计算结果赋值给a
    printf("%d\t%d\n", a,i);
    system("pause");
    return 0;
}

