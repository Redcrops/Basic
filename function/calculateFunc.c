#include "calculateFunc.h"
#include <stdio.h>
// 源文件.c是函数的实现
typedef enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLLOCFAIL,
    ON_INVALIDACCESS,
} STATUS_CODE;
int calculateAdd(int num1, int num2)
{

    return num1 + num2;
}

int calculateSub(int num1, int num2)
{
    return num1 - num2;
}
int calculateMul(int num1, int num2)
{
    return num1 * num2;
}
int calculateDiv(int num1, int num2)
{
    if (num2 == 0)
    {
        return ON_INVALIDACCESS;
    }
    return num1 / num2;
}