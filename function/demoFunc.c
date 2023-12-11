#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculateFunc.h"

// 函数参数：可以没有也可以有
// 函数返回值：可以没有也可以有
// 没有的情况需要写void
// 如果有返回你想返回的类型
// 什么是API：application programing interface
#if 1
// case1:没有参数，没有返回值
void purchaseAppointThing()
{
    printf("purchase a phone\n");
}
// case2:有参数，没有返回值
#if 0
void myAddNum(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum=%d", sum);
}
#endif

// case3:有返回值
int myAddNum(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum=%d", sum);
    return sum;
}

#endif
int main()
{

    purchaseAppointThing();
    int num1 = 5;
    int num2 = 6;
    int transFormersPrice = 10;
    int totalSum = myAddNum(num1, num2);
    if (totalSum > transFormersPrice)
    {
        printf("get a tansFormers\n");
    }
    else
    {
        printf(" not get a tansFormers\n");
    }
    return 0;
}