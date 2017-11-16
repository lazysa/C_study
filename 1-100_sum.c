#include <stdio.h>

/* 1 .. 100 sum 
计算1~100之和 */

int main(void) {
    int a, sum;    // 声明变量
    sum = 0;
    
// Use while loop  
    a = 0;
    while ( a <= 100) {
        sum += a;
        a += 1;
    }

/*
// Use for loop 
    for ( a=0; a<=100; a++ ) {
        sum += a;               
    }
*/

printf("%3d\n", sum);   
}


