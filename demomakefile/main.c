#include <stdio.h>
#include <stdlib.h>

int printString()
{
    int ret = 0;
    printf("print string\n");
    return ret;
}
int main()
{
    int num1 = 10;
    printf("num1=%d", num1);
    // gcc -E main.c > main.ii
    // gcc -S main.ii
    // gcc -c main.s
    // gcc main.o ,
    // gcc -g main.c//生成调试程序
    // gdb a.out 进入gdb
    // b main.c:12  加断点
    //  info b 到断点
    //  call 调用函数地址
    printString();
    return 0;
}