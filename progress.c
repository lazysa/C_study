#include <stdio.h>
// Include `sleep` function
#include <unistd.h>

/*
// C语言中的一些循环应用，这里是进度条。
*/

int main(void) 
{
    for (int i = 0; i <= 100; i++) {
        printf("Percent complete: %d%%\n", i);
        sleep(1); 
    }
    return 0;
}
    