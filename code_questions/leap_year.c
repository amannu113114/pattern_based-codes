#include<stdio.h>
int main(void){
    int year ;
    printf("enter your year \n");
    scanf("%d", &year);
    if(year%4==0 && (year%100!=0 || year%400==0)){
            printf("your given year is leap year\n");
    }else{
            printf("your given year is not leap year\n");
    }
    

    
}