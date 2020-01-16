//
// Created by 困呐～ on 2019/12/18.
//

#include <stdio.h>

int main() {
    int i1;
    scanf("%d", &i1);
//    for (; i1 >= 10; i1 = i1 / 10) {
//    }
    while(i1 >= 10) {
        i1 = i1 / 10;
        // i1 /= 10;
    }
    printf("%d", i1);

    // 一个 10进制数 获取其个位数  %   789 % 10 = 78 * 10 + 9

    // 789 / 10 % 10
    //
    if(i1 < 10) {
        //...
    } else {
        // i1 / 10 % 10;
    }



    return 0;
}