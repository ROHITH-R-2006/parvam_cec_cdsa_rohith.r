#include<stdio.h>
int fibonacci(int num){
    if(num==0){
        return 0;
    } else if(num==1){
        return 1;        
    } else{
        return fibonacci(num-1)+ fibonacci(num-2);
}
}
int main(){
    int number, i;
    printf("enter the range to print the fibonacci series:");
    scanf("%d", &number);
    printf("the fibonacci series from 0 to %d is:\n", number);
    for(i=0; i<number; i++){
        printf("%d\t", fibonacci(i));
    }
}

//number =3
//i=0, 0<3-T
//fib(0)->0
//i=1,1<3-T
//fib(1)->0 1
//i=2,2<3-T
//fib(2)-> 0 1 fib(2-1)+fib(2-2)
//      ->0 1  fib(1)+fib(0)
//      ->0 1   1 0