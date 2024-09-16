//
//  main.c
//  ch08_ex07
//
//  Created by 임준형 on 9/16/24.
//
//두 정수 a, b를 입력받고 최소공배수를 반환하는 함수
#include <stdio.h>
int lcm(int,int);
int main(int argc, const char * argv[]) {
    
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d와 %d의 최소공배수 : %d\n",a,b,lcm(a,b));
    return 0;
}
int lcm(int a,int b){
    int min = (a < b) ? a : b ;
    int i,j,num;
    for(i = min ; i > 1 ; i--){
        if((a % i == 0) && (b % i == 0)) break;
    }

    for(j = 2 ; ; j++){
        if( ((i*j) % a == 0) && ((i*j) % b == 0) ) {
            num = i*j;
            break;
        }
    }
    return num;
}


