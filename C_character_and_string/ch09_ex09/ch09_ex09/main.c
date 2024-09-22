//
//  main.c
//  ch09_ex09
//
//  Created by 임준형 on 9/22/24.
//
/*
 길이(글자수)가 100이하인 문자열을 입력받아 공백을 제거하고 출력해주는 함수를 작성하 시오.ex)입력:abCDefgh/출력: abCDefgh

 */
#include <stdio.h>
#include <string.h>

void myPrint(char *ptr){
    while(*ptr != '\0'){
        if(*ptr != ' '){
            printf("%c",*ptr);
        }
        
        ptr++;
    }
}
int main(int argc, const char * argv[]) {
    char str[100];
    fgets(str,sizeof(str),stdin);
    myPrint(str);
    return 0;
}
