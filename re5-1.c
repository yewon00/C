#include <stdio.h>
int main()
{
    int month, days;

    printf("달을 입력하시오:");
    scanf("%d", &month);

    switch(month)
    {
        case2:
           days=28;
           break;
        case4:
        case6:
        case9:
        case11:
           days=30;
           break;
        default:
           days=31;
           break;
    }
    printf("%d월의 일수는 %d입니다.\n", month, days);
    return 0;
}