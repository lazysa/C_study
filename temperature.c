#include <stdio.h>

/* 对fahr = 0, 20, ..., 300
打印华氏温度与摄氏温度对照表 */

int main(void) {
    /* 开始声明变量 */
    int fahr, celsius; 
    int lower, upper, step;

    lower = 0;  /* 温度表的下限 */

/*
// Use while loop
    upper = 300; // 温度表的下限    
    step = 20; // 步长    
    while (fahr <= upper) {
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));    // 分别打印3位宽度的十进制和6位宽度、小数点后1位的浮点数
        fahr += step;
    }
*/

// Use for loop
    fahr = lower;
    for (fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%3d\t%6.1f\n", fahr, (fahr-32)*(5.0/9.0));    // 分别打印3位宽度的十进制和6位宽度、小数点后1位的浮点数
    }

    return 0;
}


