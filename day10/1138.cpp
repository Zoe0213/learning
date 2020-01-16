//
// Created by 困呐～ on 2019/12/26.
//
#include<stdio.h>
#include<string.h>

int main() {
    char str[1001];
    // scanf("%d",&i) == EOF
    while (gets(str) != NULL) {
        // 前一个字符是什么
        // pos 就代表如果存在 // ，他就是第一个双斜杠的位置 i
        int pos = -1;
        //shdidk/dnkdnk//
        for (int i = 1; str[i] != '\0'; i++) {
            // 如果前面一个是/ 现在也是/ ，那么就是双斜杠
            if (str[i] == '/' && str[i-1] == '/') {
                pos = i - 1;
                break;
            }
        }
        if (pos == -1) {
            puts(str);
        } else {
            // printf("POS = %d\n", pos);
            // 怎么把 0 - pos-1 的字符串打印出来
//            for (int k = 0; k <= pos - 1; k++) {
//                printf("%c", str[k]);
//            }
//            printf("\n");
            char temp[1001];
            strncpy(temp,str+0,pos);
            puts(temp);
        }
    }
    return 0;
}
