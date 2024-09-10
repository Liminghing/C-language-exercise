//
//  main.c
//  ch04_ex03
//
//  Created by 임준형 on 9/10/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int year;
    scanf("%d",&year);
    if(((year%4)==0)&&((year%100)!=0)){
        printf("1");
    }else if((year%400)==0){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}
