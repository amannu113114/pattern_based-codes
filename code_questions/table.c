#include<stdio.h>
int main (void){
    int num1,i;
    printf("enter the number you want to print the table\n");
    scanf("%d", &num1);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n", num1,i,num1*i);
    }
//for the reverse table we have to initialise the for loop by decreament of the i value.//
    printf("your reverse table is \n");
    for(i=10;i>=1;i--){
        printf("%d * %d = %d\n", num1,i,num1*i);
    }   
}