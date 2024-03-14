#include<stdio.h>
int main (void){
    int n,sum;
    printf("enter the term of no you want to add\n");
    scanf("%d", &n);
    int result=n,i=0;
    while(i<n){
        sum = i;
        i++;
        result = result + sum;
    }
    printf("%d", result);
}