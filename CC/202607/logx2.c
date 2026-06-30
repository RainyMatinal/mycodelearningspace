#include <stdio.h>
int main(){
    int x;
    int rev = 0;
    int y;
    y = x;
    scanf("%d", &x);
    while (x > 1 ){
        x = x / 2;
        rev ++;
    }
    printf("log2 of %d is %d", y, rev);
    return 0;
};