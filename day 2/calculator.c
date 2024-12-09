#include<stdio.h>
int main(){
    char operator;
    float op1,op2,result;//float-%f int-%d char-%c
    printf("enter the operator(+,-,*,/):");
    scanf("%c", &operator);//scanf- for the user to input
    printf("enter any two numbers:");
    scanf("%f %f", &op1,&op2);//&- for addressing the operator 
    switch(operator)
    {
     case'+':
        result = op1 + op2;
        printf("sum of  %f &  %f:%f",op1 ,op2, result);
        break;
     case'-':
        result = op1 - op2;
        printf("difference of  %f &  %f:%f",op1 ,op2, result);
        break;
     case'*':
        result = op1 * op2;
        printf("product of %f & %f:%f",op1 ,op2, result);
        break;
     case'/':
         result = op1/op2;
         printf("quotient of %f & %f :%f",op1 ,op2, result); 
         break;
     default:
         printf("invalid input.please try agian");
         break;    
    }
    return 0;
}    
        
     
    
     


     