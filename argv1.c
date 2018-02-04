#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
格式化输出main函数的所有参数
附：
main函数的参数(形参)
argc    命令行总参数个数
*argv[]     命令行字符串指针数组
argv[0]     程序全路径名
argv[1]     程序名后的第一个字符串 
*/

int main (int argc, char *argv[])
{
    // 检查参数
    if (argc <= 1) 
    {
        printf("Please enter at least one string argc!\n");
        exit(-1);
    }
    else
        printf("Argv check pass\n");

    // 打印程序第1个参数
    printf("One argv's: %s\n", argv[1]);
    // 打印程序第1个参数的第2个字符
    printf("One aegv's two string: %c\n", argv[1][1]);
}


/*
int main (int argc, char *argv[])
{
    // print arguments
    printf("\n");
    for (int i = 0; i < argc; i++)
    {
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
            printf("%c\n", argv[i][j]);
        printf("\n"); 
    }
}
*/