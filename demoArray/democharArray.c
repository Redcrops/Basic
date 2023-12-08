#include <stdio.h>
#define BUFFER_SIZE 10
int main()
{
#if 0
    int array[BUFFER_SIZE] = {0};

    int arrayLen = sizeof(array);
    printf("arraylen=%d\n", arrayLen);
    int elementLen = sizeof(array[0]);
    printf("elementLen=%d\n", elementLen);
    int length = arrayLen / elementLen;
    printf("length=%d\n", length);
#endif
#if 0
    // 字符数组。什么是字符：
    char pNum = 'a';
    printf("pNum=%c\n", pNum);

    // 只要是指针的变量必须是p开头
    char *ptr = "hello world";
    printf("ptr:%s\n", ptr);
    char buffer[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
    int buflen = sizeof(buffer);
    printf("buflen=%d\n", buflen);
#endif
#if 1
    char buffer1[] = "helloworld"; // 字符数组初始化有双引号（默认加上'\0'）和大括号加单引号两种
    char buffer2[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
    char buffer3[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
    int buflen1 = sizeof(buffer1);
    int buflen2 = sizeof(buffer2);
    int buflen3 = sizeof(buffer3);

    printf("&buffer1=%p\n&buffer2=%p\n&buffer3=%p\n", buffer1, buffer2, buffer3);
    printf("buffer1=%s\nbuflen1=%d\n", buffer1, buflen1);
    printf("buffer2=%s\nbuflen2=%d\n", buffer2, buflen2);
    printf("buffer3=%s\nbuflen3=%d\n", buffer3, buflen3);

#endif

    return 0;
}