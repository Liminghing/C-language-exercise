//
//  main.c
//  ch06_ex02
//
//  Created by 임준형 on 9/12/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num[7],N;
    int count = 0;
    for(int i = 0 ; i < 7 ; i++){
        printf("7개중 %d번째 정수 입력 : ",i+1);
        scanf("%d",&num[i]);
    }
    printf("N 입력 : ");
    scanf("%d",&N);
    for(int i = 0 ; i < 7 ; i++){
        if(num[i]> N){
            count++;
        }
    }
    printf("%d보다 큰수는 %d개 존재",N,count);
    return 0;
}

