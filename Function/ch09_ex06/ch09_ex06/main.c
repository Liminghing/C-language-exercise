//
//  main.c
//  ch09_ex06
//
//  Created by 임준형 on 9/22/24.
//
/*
 문자열 str과 문자 c를 입력받는다. 문자열 str 내에 문자 c가 포함되어 있다면 해당 문자 가 최초로 발견되는 인덱스를, 포함되지 않았다면 –1을 리턴하는 함수
 */
#include <stdio.h>
#include <string.h>
int includeChar(char* ptr,char c){
    int count = 0;
    while(*ptr!='\0'){
        
        if(*ptr == c){
            return count;
        }
        
        count++;
        ptr++;
    }
    
    return -1;
}
int main(int argc, const char * argv[]) {
    char str[50];
    char c;
    
    printf("문자열 : ");
    gets(str);
    
    printf("문자 : ");
    c = getchar();
    
    printf("result : %d",includeChar(str,c));
    
    
    return 0;
}
