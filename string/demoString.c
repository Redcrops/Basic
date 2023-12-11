#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 32
// 函数三要素：1.函数名：见名知意2.函数参数：见名知意
// 3.函数返回值：
int main()
{
#if 0 // 数组初始化
    char array[BUFFER_SIZE];//字符数组
    memset(array, 0, sizeof(array));//数组初始化
#endif
#if 0 // 字符串函数
    char array1[BUFFER_SIZE] = "hello world";
    // strlen
    int len = strlen(array1);
    printf("len = %d\n", len);
    // strcpy
    char name1[BUFFER_SIZE];
    memset(name1, 0, sizeof(name1));
    strcpy(name1, "zhangsan");
    printf("name=%s\n", name1);
    // strcat
    strcat(name1, " is a boy");
    printf("name1=%s\n", name1);
    // strcmp
    char name2[BUFFER_SIZE] = "wangwu";
    int ret = strcmp(name1, name2);
    printf("ret=%d\n", ret);

#endif
#if 1 // 字符串
    char *ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);

    printf("len=%d\n", len);
    printf("size=%d\n", size); // 静态数组在栈区，char *ptr 在全局区
    printf("*ptr=%c", *ptr);
    *ptr = 'H';
    printf("*ptr=%c", *ptr); // 不可修改

#endif

    return 0;
}