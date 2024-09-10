//
//  main.c
//  ch04_ex04
//
//  Created by 임준형 on 9/10/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>0 && y>0){
        printf("1사분면");
    }else if(x<0 && y>0){
        printf("2사분면");
    }else if(x<0 && y<0){
        printf("3사분면");
    }else if(x>0 && y<0){
        printf("4사분면");
    }else if(x!=0 && y==0){
        printf("x축");
    }else if(x==0 && y!=0){
        printf("y축");
    }else{
        printf("원점");
    }
    return 0;
}
