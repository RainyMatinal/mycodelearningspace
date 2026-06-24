#include <stdio.h>
int main(){
    int amount = 100
    int price = 0;

    printf("请输入你的数字");
    scanf("%d , &price");

    printf("qing shu ru piao mian")
    scanf("%d", &amount);

    int change = amount - price; 
    printf("找您%d元" , change);
    
    return 0 ;
}   