#include <stdio.h>
#pragma warning (disable : 4996)

int main()
{
    int a;
    printf("정수 입력 :");
    scanf("%d", &a);
    printf("%d%d%d%d%d%d\n", a, a, a, a, a, a);
    printf("%d    %d\n", a, a);
    printf("%d    %d\n", a, a);
    printf("%d%d%d%d%d%d", a, a, a, a, a, a);
    return 0;
}