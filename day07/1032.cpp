//
// Created by 困呐～ on 2019/12/22.
//

#include <stdio.h>

int main(){
    int i1;
    scanf("%d",&i1);
    int sum=0;
    while(i1 != 0) {
        int i2 = i1 % 10;
        i1 /= 10;
        sum=sum+i2;
    }
    printf("%d\n",sum);
    return 0;
}