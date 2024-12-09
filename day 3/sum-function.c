#include<stdio.h>
int sum(int a, int b){//datatype fun_name(parameters){ //function declaration
    return a+b;// statements for some operations//function definition
}
int main(){
    int op1, op2, add;
    printf("enter any two numbers:");
    scanf("%d %d", &op1 ,&op2);
    add = sum(op1, op2);//function call
    printf("sum of %d & %d: %d", op1, op2, add); 
}
