#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_SIZE 10

// 内存泄露
int main()
{
    // 1.什么情况会导致内存泄漏
    // 1.野指针2.malloc出的堆空间没有被释放 3.踩内存（读写无效）字符串赋值超过分配内存限度（强占地址）
    // case 1:野指针
#if 0
        int a;
    printf("%d\n", a);

    int array[BUFFER_SIZE];
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d]=%d\n", idx, array[idx]);
    }

#endif

    // char *p;//野指针

    // case 2:字符串赋值超过分配内存限度（强占地址）
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE - 1);
    // 使用malloc分配的空间，数据是脏的，简称脏数据
    if (!ptr)
    {
        // 状态码
        return -1;
    }
    memset(ptr, 0, sizeof(char) * BUFFER_SIZE);
#if 0
    strcpy(ptr, "hello");
#else
    // 使用安全
    strncpy(ptr, "hello worldasdasdasdas", BUFFER_SIZE - 1);
#endif
    printf("ptr=%s\n", ptr);
    // case 3:malloc出的堆空间没有被释放
    if (ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }
    return 0;
}