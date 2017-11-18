#include <stdio.h>

/* 1 .. 100 sum 
计算1~100之和 */

int main(void) {
    int first, sum=0;            // 声明并定义变量
    first = 1;
    #define LAST 100
    #define STEP 1 

/* 
// Use while loop  
    while ( first <= LAST) {
        sum += first;
        first += STEP;
    }
*/

// Use for loop 
    for ( first=0; first<=LAST; first++ ) {
        sum += first;               
    }

// 用高斯求和公式
//printf("%3d\n", (first + LAST) * (LAST / 2 ));   

printf("%3d\n", sum);   
}



