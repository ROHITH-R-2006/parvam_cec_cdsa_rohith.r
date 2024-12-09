#include<stdio.h>
int main(){
    int num, rev=0;
    printf("enter a number to be reversed:");
    scanf("%d", &num);
    printf("entered number: %d\n" , num);
    while(num>0){
        rev = rev * 10 + num % 10;
        num = num / 10;        
    }
    printf("reversed number:%d" , rev);
}

//num=683
//step-1: 683>0
//      rev=0* 10+ 683%10=0+3=3
//        num=683/10=68
//step-2: 68>0
//        rev=3*10+68%10=30+8=38
//        num=68/10=6
//step-3: 6>0
//        rev=38*10+6%10=380+6=386
//        num=6/10=0         
//step4:  0>0-F
//stop