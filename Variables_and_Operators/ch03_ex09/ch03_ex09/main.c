//
//  main.c
//  ch03_ex09
//
//  Created by 임준형 on 9/9/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("큰수로 작은수로 나눈 몫 : %d,나머지 : %d",(a>b) ? a/b :b/a ,(a>b) ? a%b : b%a);
    return 0;
}
