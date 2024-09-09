//
//  main.c
//  ch03_ex03
//
//  Created by 임준형 on 9/9/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double temp;
    scanf("%lf",&temp);
    printf("섭씨 %.2lf C는 화씨%.2lf F이다.",temp,(temp * 9/5) + 32);
    return 0;
}
