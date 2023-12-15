#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 5
#define ROW 3
#define COLUMN 3

int main()
{
#if 1 // 二维数组
    // 从一维数组到二维数组
    int array1[BUFFER_SIZE] = {0};
    int len = sizeof(array1);
    printf("len=%d\n", len);
    // 二维数组定义
    int array2[ROW][COLUMN] = {0};
    len = sizeof(array2);
    printf("len=%d\n", len);
    // 给二维数组赋值
    array2[0][0] = 100;
    int count = 1;
    printf("array2[0][0]=%d\n", array2[0][0]);

    for (int idx = 0; idx < ROW; idx++)
    {
        for (int jdx = 0; jdx < COLUMN; jdx++)
        {
            array2[idx][jdx] = count;
            count++;
            // printf("array2[%d][%d]=%d\n", idx, jdx, array2[idx][jdx]);
        }
    }
    count = 0;
    for (int row = 0; row < ROW; row++)
    {
        for (int col = 0; col < COLUMN; col++)
        {
            printf("array2[%d][%d]=%d\t", row, col, array2[row][col]);
            count++;
            if (count % 3 == 0)
            {
                printf("\n");
            }
        }
    }
#endif
#if 1
    printf("array2[0]:%p\n", array2[0]); // a[0]是第一行的地址, a[0]是第一行的地址也是a[0][0]的地址
    printf("array2[0][0]%p\n", &array2[0][0]);
    printf("array2=%p\n", array2);
    printf("\n");

    printf("array2[0]:%p\n", array2[1]); // a[1]是第二行的地址
    printf("array2[1][0]%p\n", &array2[1][0]);
    printf("array2=%p\n", array2 + 1);
    printf("\n");

    printf("array2[0]:%p\n", array2[2]); // a[2]是第三行的地址
    printf("array2[2][0]%p\n", &array2[2][0]);
    printf("array2=%p\n", array2 + 2);
    printf("\n");

    printf("array2[2][2]=%d*(*(array2+2)+2=%d\n", array2[2][2], *(*(array2 + 2) + 2));
#endif
    return 0;
}