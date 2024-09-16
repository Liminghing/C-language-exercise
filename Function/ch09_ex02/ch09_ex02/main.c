//
//  main.c
//  ch09_ex02
//
//  Created by 임준형 on 9/22/24.
//
/*<stdio.h> 헤더 내에 정의된 함수만 사용하여 문자열 내에서 널문자(\0)를 제외한 유의미 한 문자의 수를 반환해주는 strlen 함수*/

#include <stdio.h>
int my_strlen(char *ptr){
    int count = 0;
    while(*(ptr++)!='\0') {
        count++;
    }
    return count;
}
int main(int argc, const char * argv[]) {
    char str[50] = "abcdef";
    printf("str 길이 : %d",my_strlen(str));
    return 0;
}
