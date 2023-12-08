#include <stdio.h>
#define BUFFER_SIZE 40
int main()
{
#if 0 // 数组越界访问
 int array[BUFFER_SIZE] = {0};

    // 数组的越界访问，判断索引的有效性:索引必须是索引的合理范围range[0-BUFFER_SIZE-1]
    printf("array[-1]=%d\n", array[-1]);
    printf("array[10]=%d\n", array[10]);
#endif
#if 0
    int desk[BUFFER_SIZE]; // 静态数组
//动态数组：自动扩容算法
#endif

    return 0;
}