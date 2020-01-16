//
// Created by 困呐～ on 2020/1/6.
//
#include <stdio.h>
int main(){
    int x,m,n,paper;
    paper=0;
    scanf("%d%d%d",&x,&m,&n);
    for(int i=0;i<n;i++){
        paper=paper+x;
        x=x+m;
    }
    printf("%d\n",paper);
    return 0;
}
