//
// Created by 困呐～ on 2020/1/13.
//

#include <stdio.h>
#include <string.h>

int main() {
    char str[201];
    while (gets(str) != NULL) {
        for (int i = 0; str[i] != '\0'; i = i+2) {
            char temp;
            temp = (str[i] - '0') * 10 + (str[i + 1] - '0') + 24;
            printf("%c", temp);
        }
        printf("\n");
    }
    return 0;
}