#include<stdio.h>
int main(){
    //datatype array_name[size];
    int arr[5]={10,20,30,40,50};//array declaration and initalization
    printf("the array elemnts are as follows:\n");
    for(int i=0;i<5;i++){
        printf("%d\t", arr[i]);
    }
}  
//array- we use array to store multiple values of same type in single variable
//size of an array=n-1
//eg arr[5]
//size=5-1=4