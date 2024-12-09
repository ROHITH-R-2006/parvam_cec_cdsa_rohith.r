#include<stdio.h>
int main(){
    int num, sum=0, digit;
    printf("enter any number to get sum of digits:");
    scanf("%d", &num);
    printf("sumof %d is:", num);
    do{
        digit=num%10;
        sum=sum+digit;
        num=num/10;        
    }while(num>0);
    printf("%d", sum);
} 
//num=789
//step1: digit=789%10=9
//         sum=0+9=9
//         num=789/10=78
//         78>0 - T
//step2: digit=78%10=8
//         sum=9+8=17
//         num=78/10=7
//         7>0 - T   
//step3: digit=7%10=7
//         sum=17+7= 24
//         num=7/10=0
//         0>0 - F   



