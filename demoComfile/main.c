#include <stdio.h>
#include <stdlib.h>

int printString()
{
    int ret = 0;
    printf("print string\n");
    return ret;
}
int selectchoice(int choice)
{
    switch (choice)
    {
    case 1:
        printf("print 1\n");
        break;
    case 2:
        printf("print 2\n");
        break;

    default:
        break;
    }
}
int main()
{
    int num1 = 2;
    printf("num1=%d", num1);

    // gcc -E main.c > main.ii
    // gcc -S main.ii
    // gcc -c main.s
    // gcc main.o ,
    // gcc -g main.c//生成调试程序
    // 第一步gdb a.out 进入gdb
    // 第二步b main.c:12  加断点
    //  info b 到断点
    //  第三步call 调用函数地址
    // 第四步 call 函数本身（带参数）
    // 加断点，跑起来，call函数名字，call函数本身（带参数）
    printString();
    selectchoice(num1);
    return 0;
}