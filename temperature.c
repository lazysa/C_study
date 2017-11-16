#include <stdio.h>

/* 对fahr = 0, 20, ..., 300
打印华氏温度与摄氏温度对照表 */

int main(void) {
    /* 开始声明变量 */
    int fahr, celsius; 
    int lower, upper, step;

    lower = 0;  /* 温度表的下限 */
    upper = 300; /* 温度表的下限 */
    step = 20; /* 步长 */

    fahr = lower;
    //while (fahr <= upper) {
    for ( fahr = 0; fahr <= 300; fahr += 20 ) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);    /*分别打印3位十进制，6位十进制宽度*/
    //    fahr = fahr + step;
    }
    return 0;
}


