//
//  main.c
//  ch04_ex08
//
//  Created by 임준형 on 9/10/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int max = (n1>n2)?n1:n2;
    int min = (n1<n2)?n1:n2;
    for(;min<=max;min++){
        for(int i = 1 ; i< 10 ; i++){
            printf("%d X %d = %d\n",min,i,min*i);
        }
        printf("\n");
    }
    return 0;
}
