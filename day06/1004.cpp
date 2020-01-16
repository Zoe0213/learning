//
// Created by 困呐～ on 2019/12/20.
//
#include <stdio.h>

int main(){
    int n;
    int i1;
    int i2;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d%d",&i1,&i2);
        printf("%d\n",i1+i2);
    }
    return 0;
}
