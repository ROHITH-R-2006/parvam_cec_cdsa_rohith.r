#include<stdio.h>
int factorial(int num){
    if(num==0|| num==1){
        return 1;
    }
    return num * factorial(num-1);
}
int main(){
    int number,result;
    printf("enter a number to find the factorial:");
    scanf("%d", &number);
    result=factorial(number);
    printf("the factorial of %d is:%d", number, result);
}

//num=3
//result=fact(3)
//step1:3-0 or1 --F
//      return 3* factorial(3-1)=3*fact(2)
//                                 return 2* fact(2-1)=2*fact(1)
//              3*2*1=6                                      =2*1
//recursion-calling a function withna function