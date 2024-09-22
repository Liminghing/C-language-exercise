//
//  main.c
//  ch09_ex10
//
//  Created by 임준형 on 9/22/24.
//
/*
 어떤 문자열이 있을 때 문자열 내에서 단일문자 ‘t’의 인덱스를 모두 찾아 출력하시오. ex) 입력 : “test” / 출력 : 0 3
 
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    char  str[100] = "tjkhxduthkxhdbtsts";
    char *ptr = str;
    int count = 0;
    while(*ptr != '\0'){
        if(*ptr == 't') {
            printf("%d ",count);
        }
        count++;
        ptr++;
    }
    return 0;
}
