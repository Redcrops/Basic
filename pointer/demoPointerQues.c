#include <stdio.h>
#include <string.h>
int main()
{
#if 0
    // 指针和字符串
    char *ptr = "hello world";

    // 字符串常量?什么叫字符串常量
    // 打印字符串的每一个字符
    // way1:for循环
    int len = strlen(ptr);
    printf("len=%d", len);
    char p = '0';
    for (int idx = 0; idx < strlen(ptr); idx++)
    {
        p = *ptr;
        printf("p=%c,idx=%d\n", p, idx);
        ptr++;
        printf("strlen(ptr)=%ld", strlen(ptr));
    }

    // 实现方式2：
    while (*ptr != '\0')
    {
        printf("%c\t", *ptr);
        ptr++;
    }
#endif
#if 0
 char *ptr = "hello world";

    // 字符串常量?什么叫字符串常量
    // 打印字符串的每一个字符
    // way1:for循环
    int len = strlen(ptr);
    printf("len=%d", len);
    for (int idx = 0; idx < strlen(ptr); idx++)
    {
        p = *ptr;
        printf("p=%c,idx=%d\n", p, idx);
        ptr++;
    }

#endif
    return 0;
}