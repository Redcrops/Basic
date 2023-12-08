#include <stdio.h>
#include <string.h>
// 数组：一段连续的存储空间；存放的数据类型相同

#define BUFFER_SIZE 10
int main()
{
#if 0
     int array[BUFFER_SIZE];
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d]=%d\n", idx, array[idx]);
    }
#endif
#if 0
  int array[BUFFER_SIZE];
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d]=%d\n", idx, array[idx]);
    }
    // 清除脏数据
    int len = sizeof(array);
    printf("len=%d\n", len);
    // 地址
    printf("%p\n", array);
    printf("%p\n", &array[0]);
    printf("%p\n", &array[1]);
    printf("%p\n", &array[9]);
    printf("%p\n", &len);
//数组的地址和数组的首元素地址是一样的
#endif
#if 0//memset
    int array[BUFFER_SIZE];
    memset(array, 0, sizeof(array)); // 清楚脏数据
    printf("=============\n");
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d]=%d\n", idx, array[idx]);
    }

    return 0;
}