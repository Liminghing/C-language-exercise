//
//  main.c
//  ch03_ex01
//
//  Created by 임준형 on 9/9/24.
//

#include <stdio.h>
/*사용자로부터 임의의 두 정수 a,b를 입력받고 덧셈, 뺄셈, 곱셈, 나눗셈의 결과를 출력해주
 는 소스코드를 작성. (나눗셈 결과는 소숫점 둘째자리까지만 표현)*/

int main(int argc, const char * argv[]) {
    int a,b;
    scanf(" %d %d",&a,&b);
    printf("a + b = %d\n",a+b);
    printf("a * b = %d\n",a * b);
    printf("a / b = %.2lf\n",(double)a/b);
    printf("a %% b = %d\n",a % b);
    return 0;
}
