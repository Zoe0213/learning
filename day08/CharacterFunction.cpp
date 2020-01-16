//
// Created by 困呐～ on 2019/12/23.
// https://blog.csdn.net/tanrui519521/article/details/81162267
#include <stdio.h>
#include <string.h>

int main() {

    // 1  = 0001
    // 2  = 0010
    // 3  = 0011
    // 4  = 0100
    // 5  = 0101
    // 6  = 0110
    // 7  = 0111
    // 8  = 1000
    // 9  = 1001
    // 10 = 1010
    // 11 = 1011
    // 12 = 1100
    // 13 = 1101
    // 14 = 1110
    // 15 = 1111

    //


    // 高低电频

    // 一个字节 = 8位 = 2^8  = 256
    // char 128 = 2^7  1个字节
    // unsigned
    // int  4个字节  -(2^31) ~ (2^31 - 1)
    //
    int k; // 2^
    char c;
    printf("%d\n", sizeof(k));
    printf("%d\n", sizeof(c));



    // 1000字节连续的
    char str[1000];
    // str str + 1
    // int a[100] a  &a[1] = a + 1
    scanf("%s", str);
    printf("len = %d\n", strlen(str));

    char strCopy[1000];
    strcpy(strCopy, str);
    printf("strCopy = %s\n", strCopy);

    char strCopyN[1000];
    strncpy(strCopyN, str, 5);
    printf("strCopyN = %s\n", strCopyN);

    char strCopyM[1000];
    strncpy(strCopyM, str + 3, 5);
    printf("strCopyM = %s\n", strCopyM);

    char strCopyK[1000];
    strncpy(strCopyK, &str[3], 5);
    printf("strCopyK = %s\n", strCopyK);

    char temp[1000];
    printf("strcat = %s\n",strcat(strCopyN,strCopy));
    printf("strCopyN = %s\n",strCopyN);

    printf("strcmp = %d\n",strcmp("OK","OK"));
    printf("strcmp = %d\n",strcmp("OK11","OK"));
    printf("strcmp = %d\n",strcmp("aaa","abc"));
    return 0;
}

// I_LOVE_ZHX