//
//  main.c
//  ch03_ex02
//
//  Created by 임준형 on 9/9/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d, %d, %d 의 합 : %d, 평균 : %.2lf\n",a,b,c,a+b+c,(double)(a+b+c)/3);
    return 0;
}
