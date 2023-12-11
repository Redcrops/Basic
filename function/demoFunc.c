#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculateFunc.h"

// 函数参数：可以没有也可以有
// 函数返回值：可以没有也可以有
// 没有的情况需要写void
// 如果有返回你想返回的类型
// 什么是API：application programing interface

int main()
{
#if 0 // 枚举也是一种数据类型
    
    typedef enum STATUS_CODE
    {
        ON_SUCCESS,
        ON_ERROR,
        ON_NULLPTR,
        ON_MALLLOCFAIL,
    } STATUS_CODE;
    // 取别名
    // 用STATUS_CODE代替enum STATUS_CODE
    __uint16_t a;

    STATUS_CODE status;
    int len = sizeof(status);
    printf("len=%d\n", len);
#endif
#if 0
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
#if 0
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
#endif
#if 1
    int num1 = 50;
    int num2 = 60;

    int sum = calculateAdd(num1, num2);
    printf("sum=%d\n", sum);

    int num3 = calculateSub(num1, num2);
    printf("num3=%d\n", num3);

    int amass = calculateMul(num1, num2);
    printf("amass=%d\n", amass);

    int num4 = calculateDiv(num1, num2);
    printf("num4=%d\n", num4);

#endif

    return 0;
}