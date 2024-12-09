#include<stdio.h>
int main(){
    int row;
    printf("enter the number of rows:");
    scanf("%d", &row);
    for(int i=1; i<=row; i++){
        for(int j=0; j<i; j++){
            printf("*\t");
        }
        printf("\n");
    }
}

//row=3
//step1:i=1, 1<=3-T
//         j=0,0<1-T
//            *
//step2:i=1, 1<=3-T
//         j=1,1<1-F
//            *
//step3:i=2, 2<=3-T
//         j=0,0<2-T
//            *
//            *
//step4:i=2, 2<=3-T
//         j=1,1<2-T
//            *
//            * *
//step5:i=2, 2<=3-T
//         j=2,2<2-F
//            *
//            * *
//step6:i=3, 3<=3-T
//         j=0,0<3-T
//            *
//            * *
//            *  
//step7:i=3, 3<=3-T
//         j=1,1<3-T
//            *
//            * * 
//            * * 
//step8:i=3, 3<=3-T
//         j=2,2<3-T
//            *
//            * *
//            * * *
//step9:i=3, 3<=3-T
//         j=3,3<1-F
//          N A
//step10:i=4, 4<=3-F
//            STOP
