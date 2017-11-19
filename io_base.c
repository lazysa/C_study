#include <stdio.h>

/* 输入字符复制到输出
getchar putchar 函数默认都只能操作1个字符
*/

int main (void) {
    int io;
    // printf("EOF is: %d\n", EOF);                 // 打印 EOF 的值

    /*// 验证右边等式的值
    while (io = getchar() != EOF) {               
        printf("%d\n", io);                      
    printf("%d - at EOF\n", io);      
    */           
    while ((io = getchar()) != EOF) {
    putchar(io);
    }
    return 0;
}