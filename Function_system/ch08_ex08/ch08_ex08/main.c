//
//  main.c
//  ch08_ex08
//
//  Created by 임준형 on 9/16/24.
//
//정수 n을 입력받고 정수 n이상의 수 중 가장 작은 소수를 반환하는 함수

#include <stdio.h>
int PNum(int);
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    printf("%d이상의 수 중 가장 작은 소수는 %d",n,PNum(n));
    return 0;
}
int PNum(int n){
    int i,j;
    for(i = n ; ; i++){
        for(j = 2 ; j < i ; j++){
            if(i%j == 0) break;
        }
        if(i == j) break;
    }
    return i;
}
