#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float radius;
    float area;

    printf("반지름을 입력하시오:");
    scanf("%f", &radius);

    area = 3.14*radius*radius;

    printf("원의 면적:%f", area);

    return 0;
}
