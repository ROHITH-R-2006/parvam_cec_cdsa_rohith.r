#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter any three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);

    // cond1 ? true :  - Ternary

    ((num1>num2)&&(num1>num3))
                ?printf("first number(%d)is greatest",num1)
                :(num2>num3)
                ?printf("second number(%d)is greatest",num2)
                :printf("third number(%d)is greatest",num3);
}