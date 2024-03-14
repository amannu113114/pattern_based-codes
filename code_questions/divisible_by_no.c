#include<stdio.h>
int main (){
    int num,no;
    no=97;
    printf("enter the you want to check that number is divisible by 97 or not\n");
    scanf("%d", &num);
    if(num%no==0){
        printf("your given number is divisible by 97\n");

    }
    else {
        printf("your given number is not divisible by 97\n");
    }
}