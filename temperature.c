#include <stdio.h>

/* 对fahr = 0, 20, ..., 300
打印华氏温度与摄氏温度对照表 */

int main(void) {
    /* 开始声明变量 */
    int fahr; 
    #define LOWER 0             // 温度表的下限 , 推荐使用符号常量
    #define UPPER 300           // 温度表的上限
    #define STEP 20             // 步长

/*
// Use while loop
    while (fahr <= UPPER) {
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));    // 分别打印3位宽度的十进制和6位宽度、小数点后1位的浮点数
        fahr += STEP;
    }
*/

// Use for loop
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3d\t%6.1f\n", fahr, (fahr-32)*(5.0/9.0));    // 分别打印3位宽度的十进制和6位宽度、小数点后1位的浮点数
    }

    return 0;
}


