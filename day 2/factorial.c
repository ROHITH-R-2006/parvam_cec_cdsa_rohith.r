#include<stdio.h>
int main(){
    int num,fact=1;
    printf("enter a number to get the factorial:");
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }    
    printf("factorial of %d: %d", num,fact);
}  


// num=5
//step-1:i=1,1<=5-T
//       fact=1*1=1
// step2: i=2,2<=5-T
//        fact=1*2=2
//step3:i=3,3<=5-T
//      fact=2*3=6
//step4:i=4,4<=5-T
//      fact=6*4=24
//step5:i=5,5<=5-T
//      fact=24*5=120
//step6:i=6,6<=5-F
//stop
