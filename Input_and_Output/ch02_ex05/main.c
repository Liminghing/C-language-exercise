//
//  main.c
//  ch02_ex05
//
//  Created by 임준형 on 9/2/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double temp;
    scanf("%lf",&temp);
    printf("섭씨 %.1lfC는 화씨 %.lfF이다",temp,(temp*(9/5))+32);
    return 0;
}
