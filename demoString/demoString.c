#include <stdio.h>
const int g_nnum = 10; // 不可修改
int main()
{
#if 1

    char buffer1[] = "helloworld"; // 栈区
    buffer1[0] = 'H';
    printf("buffer1=%s\nbuffer1[0]=%c\n", buffer1, buffer1[0]);
    char *ptr = "helloworld"; // 全局区/常量区
    printf("ptr[0]=%c\n*(ptr+1)=%c\n", *(ptr + 0), *(ptr + 1));
    // 为什么字符串不能改？因为字符串是常量，也是存放在全局区的；
    ptr[0] = 'H';
    printf("ptr[0]=%c\n", ptr[0]);
    // gcc -g demoString.c -o demoString
    // gdb demoString
    // gdb下：run，   list
    //

#endif
    return 0;
}