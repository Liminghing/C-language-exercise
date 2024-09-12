//
//  main.c
//  ch06_ex05
//
//  Created by 임준형 on 9/12/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num[7];
    int number;
    
    int max;
    int min;
    
    for(int i = 0 ; i < 7 ; i++){
        printf("7개중 %d번째 정수 입력 : ",i+1);
        scanf("%d",&num[i]);
    }
    max=min=num[0];
    
    for(int i = 0 ; i < 7 ; i++){
        if(max<num[i]) max = num[i];
    }
    for(int i = 0 ; i < 7 ; i++){
        if(min>num[i]) min = num[i];
    }
    printf("max : %d, min : %d",max,min);
    return 0;
}
