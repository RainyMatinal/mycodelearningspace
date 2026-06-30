#include <stdio.h>
int main(){
    int grade;
    scanf("%d", &grade);
    grade = grade / 10;
    switch (grade){
        case 10:
        case 9:
        printf("优秀\n");
        break;
        case 8:
        printf("良好\n");
        break;
        case 7:
        printf("中等\n");
        break;
        case 6:
        printf("及格\n");
        break;
        default:
        printf("不及格\n");
    }
return 0;
