//
//  main.c
//  ch09_ex04
//
//  Created by 임준형 on 9/22/24.
//
/*
 <stdio.h> 헤더 내에 정의된 함수만을 사용하여 입력받은 문자열을 거꾸로 반환해주는 reverse_string 함수를 재귀 형태
 */
#include <stdio.h>
void reverse_string(char *ptr){

    if(*ptr != '\0'){
        reverse_string(ptr+1);
        printf("%c",*ptr);
    }

}

int main(int argc, const char * argv[]) {
    char str[] = "abcd";
    reverse_string(str);
    
    return 0;
}
