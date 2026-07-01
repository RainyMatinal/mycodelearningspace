#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);

    for (int i = 2; i < x; i++){
        if ( x % i ==0){
            printf("%d is not a prime number\n", x);
            break;
        }
    }
    return 0;
};