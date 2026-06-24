#include <stdio.h>
int main()
{
    int a;
    int b;
    
    printf("please input two number:");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);

    return 0;
}