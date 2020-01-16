//
// Created by 困呐～ on 2019/12/16.
//
#include <stdio.h>

int sum(int i1,int i2 );

int main() {
    int result;
    result = sum(100,200);
    printf("%d\n",result);

    int h;
    h = sum(result,100);
    printf("%d\n",h);
    return 0;
}

// cal i1 + i2
int sum(int i1, int i2) {
    int i3;
    i3 = i1 + i2;
    return i3;
}


