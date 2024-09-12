//
//  main.c
//  ch06_ex03
//
//  Created by 임준형 on 9/12/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num[7];
    int count;
    int max;
    
    for(int i = 0 ; i < 7 ; i++){
        printf("7개중 %d번째 정수 입력 : ",i+1);
        scanf("%d",&num[i]);
    }
    max = num[0];
    for(int i = 0 ; i < 7 ; i++){
        if(num[i]>max){
            max=num[i];
            count=i;
        }
    }
    printf("최댓값 : %d이고 인덱스는 %d이다",max,count);
    return 0;
}
