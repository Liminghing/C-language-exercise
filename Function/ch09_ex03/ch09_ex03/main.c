//
//  main.c
//  ch09_ex03
//
//  Created by 임준형 on 9/22/24.
//
/*
 stdio.h> 헤더 내에 정의된 함수와 for문을 사용하여 입력받은 문자열을 거꾸로 반환해주 는 reverse_string 함수
 */

#include <stdio.h>
void reverse_string(char *ptr){
    char *temp = ptr;
    char str[50];
    int count=0;
    for(;*temp != '\0' ; temp++){
        count++;
    }
    
    for(int i = 0;count>0;count--,i++){
        str[i] = ptr[count-1];
    }
    printf("%s",str);
  
}

int main(int argc, const char * argv[]) {
    char str[] = "abcd";
    reverse_string(str);
    
    return 0;
}
