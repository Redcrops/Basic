#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 32
int main()
{
#if 0
    // 1.指针怎么定义
    // 基础数据类型
    // 定义变量记得初始化
    int a = 0;
    long b = 0;

    // 指针的定义
    int *p = NULL;
#endif
#if 0 // 二级指针
    // 指针的使用
    int a = 5;

    int *p = &a;
    printf("a=%d\n", a);
    printf("&a=%p\n", &a);
    // 非常重要
    printf("*(&a)=%d\n", *(&a));

    printf("*p=%d\n", *p);
    printf("p=%p\n", p);
    printf("&p=%p\n", &p);
#if 0
 int *ptr = &p;
    printf("ptr=", ptr);
#endif
    int **ptr = &p;
    printf("ptr=%p\n", ptr);
    printf("*ptr=%p\n", *ptr);
    // 非常重要
    printf("*(*ptr)=%d\n", *(*ptr));
#endif
#if 0 // 指针大小：8字节（依据计算机系统）
    // 指针的特性
    int a = 10;
    int len = sizeof(a);
    printf("len=%d\n", len);

    char p = 97;
    len = sizeof(p);
    printf("len=%d\n", len);

    char *ptr = &p;
    printf("%c\t%d\n", *ptr, *ptr);
    len = sizeof(ptr);
    printf("len=%d\n", len);

    int *ptrInt = &a;
    printf("*(&a)=%d\n", *(&a));
    printf("*ptrInt=%d\n", *ptrInt);
    len = sizeof(ptrInt);
    printf("len=%d\n", len);
#endif
#if 1 // 指针和字符串
    char *ptr1 = "hello world";
    int len = sizeof(ptr1);
    printf("len=%d\n", len);

    // 怎么获取字符串长度
    printf("%c\n", *ptr1);
    printf("%s\n", ptr1);
    int length = strlen(ptr1);
    printf("length=%d\n", length);

    // 字符数组赋值
    char name[BUFFER_SIZE] = {0};
    strcpy(name, "zhangsan");
    printf("name=%s\n", name);

    // 给字符串赋值
    char *ptr2 = NULL;
    //  ptr2 = "zhangsan";
    // ptr2 = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr2, "zhangsan");
    printf("ptr2=%s\n", ptr2);
#endif
#if 0
     //堆空间
     //void*是一个指针，这个指针被称为万能指针
     char * ptr = (char *)malloc(sizeof(char)*BUFFER_SIZE);

#endif
    return 0;
}