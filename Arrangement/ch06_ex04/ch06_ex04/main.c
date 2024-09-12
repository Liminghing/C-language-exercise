//
//  main.c
//  ch06_ex04
//
//  Created by 임준형 on 9/12/24.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    int num[7];
    int number;
    
    int count=0;
    
    for(int i = 0 ; i < 7 ; i++){
        printf("7개중 %d번째 정수 입력 : ",i+1);
        scanf("%d",&number);
        num[i] = number%32;
    }

    //1 2 3 2 1 2 4
    //서로 다른 값이 몇 개 있는지 출력
    
    for(int i = 1 ; i < 7 ; i++){
        for(int j = 0 ; j < i ; j++){
            if(num[j]== num[i]){
                break;
            }
            else{
                if(j+1==i) count++;
            }
        }
    }
    printf("서로다른 값의 개수는 %d개이다",count+1);
    
    return 0;
}
