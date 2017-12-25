#include <stdio.h>

/* 
统计输入的字符数，通过回车键 + ^Z 结束输入
*/

int main(void) 
{
    double nc;
// nc = 0; 
// while (getchar() != EOF) {
    //     ++nl;      // 等价于nc=nc+1
    // }
    
    for (nc = 0; getchar() != EOF; ++nc) {
        ;       // 空语句
    }
    printf("%.0f\n", nc); 
    return 0;
}


