//
//  main.c
//  ch08_ex09
//
//  Created by 임준형 on 9/17/24.
//두 정수 m, n을 입력받고 더 작은 수부터 더 큰 수 사이의 소수를 모두 출력해주는 함수 를 작성

#include <stdio.h>
void PNum(int,int);
int main(int argc, const char * argv[]) {
    int m,n;
    scanf("%d %d",&m,&n);
    PNum(m,n);
    return 0;
}
void PNum(int m,int n){
    int i,j;
    
    int min = (m < n) ? m : n;
    int max = (m > n) ? m : n;
    
    for(i = min ; i <= max ; i++){
        for(j = 2 ; j < i ; j++){
            if(i%j == 0) break;
        }
        
        if(i == j) {
            printf("%d ",i);
        }
    }
}
