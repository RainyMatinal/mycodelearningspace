#include <stdio.h>
int main(){
    printf("please input your hight and weight,");

    double foot;
    double inch;

    scanf("%lf %lf", &foot, &inch);

    printf("high is %f meter \n",
    ((foot + inch / 12) * 0.3048));

    return 0;
}