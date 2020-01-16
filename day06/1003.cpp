//
// Created by 困呐～ on 2019/12/20.
//
#include <stdio.h>;

int main(){
    int i1;
    int i2;
    scanf("%d%d",&i1,&i2);
    // 取反 (i1 == 0 && i2 ==0)  <==> i1 != 0 || i2 != 0
    // !
    while(!(i1 == 0 && i2 == 0)) {
        printf("%d\n",i1+i2);
        scanf("%d%d",&i1,&i2);
    }
    return 0;
}
//0 0
//0 1
//1 0
//1 1
// i1 != 0 || i2 != 0    <=>   !(i1 == 0 && i2 ==0)
// while(!(i1 == 0 && i2 == 0))