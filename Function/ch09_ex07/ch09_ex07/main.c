//
//  main.c
//  ch09_ex07
//
//  Created by 임준형 on 9/22/24.
//
/*
 strcat 함수를 <stdio.h> 헤더 내의 함수만 이용하여 구현
 */
#include <stdio.h>
void myStrcat(char *dest,char *src){
    while(*dest != '\0') dest++;
    while(*src!='\0'){
        *dest = *src;
        dest++;
        src++;
    }
}
int main(int argc, const char * argv[]) {
    char str1[50] = "abc";
    char str2[50] = "def";
    myStrcat(str1,str2);
    
    printf("%s",str1);
    
    
    
    
    return 0;
}
