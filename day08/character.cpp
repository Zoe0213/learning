//
// Created by 困呐～ on 2019/12/23.
//
#include <stdio.h>

int main() {
    char str[1000];
    scanf("%s", str);
//    printf("%c\n",str[0]);
//    printf("%c\n",str[9]);
//    printf("%c\n",str[10]);
//    printf("%c\n",str[11]);

    printf("%d\n", str[11] == '\0');
    printf("%d\n", str[100] == '\n');

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    for (int i = 0; i < 1000; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    printf("%s\n", str);
    return 0;
}

// I_LOVE_YOU