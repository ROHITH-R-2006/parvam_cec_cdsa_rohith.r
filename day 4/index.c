#include<stdio.h>
int main(){
    int size;
    printf("enter the size of an array:");
    scanf("%d", &size);
    int arr[size];
    printf("enter the (%d) elements of an array:", size);
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    printf("the array elemnts are as follows:\n");
    for(int i=0;i<size;i++){
        printf("the element in index arr[%d]: %d\n", i, arr[i]);
    }
}