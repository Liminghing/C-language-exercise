//
//  main.c
//  ch04_ex06
//
//  Created by 임준형 on 9/10/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=0;
    int max = (a>b) ? a : b ;
    int min = (a<b) ? a : b ;
    for(;min<=max;min++){
        sum +=min;
    }
    printf("%d\n",sum);
    return 0;
}
