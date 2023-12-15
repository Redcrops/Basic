#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 5
int main()
{
#if 0
    //一块连续的存储空间；数组存储相同的数据类型；
    // char array[BUFFER_SIZE];字符数组
    // char *array[BUFFER_SIZE];//字符串数组
#endif
#if 0
    char name[BUFFER_SIZE] = {0}; // 字符数组的内存在栈区
    memset(name, 0, sizeof(name));
    // name = "zhangsan";
    strncpy(name, "zhangsan", sizeof(name) - 1); // 注意减一
    printf("name=%s", name);
    name[1] = 'H'; // 可以修改
    printf("name=%c", name[1]);
    // name[x]=*(name+x);
#endif
#if 0
    char *ptr = "zhangsan"; // 字符串：内存在全局常量区

    printf("ptr[1]=%c\n", ptr[1]);
    printf("*(ptr + 2 )=%c", *(ptr + 2));

    // ptr[0] = 'Z';
    // printf("ptr[0]=%c\n", ptr[0]);

    /*
    字符数组和字符串的区别
    1.内存：字符数组存放在栈区，存储的值可以被修改
    2.字符串存放在全局（常量）区，不可以被修改
    */

#endif
#if 1
    // 字符串数组
    char *array[BUFFER_SIZE] = {"hello", "world", "nihao", "zhangsan", "china"};
    // memset(array,0,sizeof(array));
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d]=%s\n", idx, array[idx]);
    }

#endif

    return 0;
}