#include<stdio.h>
int main(){
    int num;
    printf("enter the range to print the numbers:");
    scanf("%d", &num);
    printf("the numbers between 0 to %d are as follows:\n",num);
    for(int i=0; i<=num; i++){//for(initialization;condition;increment/decrement)
        printf("%d\n",i);
    }
}