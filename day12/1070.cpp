//
// Created by 困呐～ on 2020/1/1.
//

#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%5==0&&num%7==0){
        printf("yes\n");
    }else{
        printf("no\n");
    }

    return 0;
}