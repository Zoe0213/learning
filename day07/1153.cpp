//
// Created by 困呐～ on 2019/12/22.
//
#include <stdio.h>

int main() {
    int a[11];
    // 0 ~ 9
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    int num;
    scanf("%d", &num);
    int pos = -1;
    for (int i = 0; i < 10; i++) {
        if (num > a[i]) {
            pos = i;
        }
    }
    // pos+1 ~ 9 往后移动一格

    // 7 9 11 13 15 17 19
    //
//    for (int i = pos + 2; i < 11; i++) {
//        a[i] = a[i - 1];
//    }

    for (int i = 11; i > pos + 1; i--) {
        a[i] = a[i - 1];
    }
    a[pos+1] = num;

    for(int i=0;i<11;i++) {
        printf("%d ",a[i]);
    }
    printf("\n");

//    for(int i=pos+1;i<11;i++) {
//        a[i] = a[i-1];
//    }


    return 0;
}
