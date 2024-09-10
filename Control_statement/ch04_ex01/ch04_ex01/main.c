//
//  main.c
//  ch04_ex01
//
//  Created by 임준형 on 9/10/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a%2==0) printf("%d\n",a);
    if(b%2==0) printf("%d\n",b);
    if(c%2==0) printf("%d\n",c);
    return 0;
}
