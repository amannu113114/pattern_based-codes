#include<stdio.h>
int main (void){
    int n,j;
    scanf("%d",&n);
    for (int i =n; i>=1;i--){
        for (j=90 ; j>=1+90-i;j--){
            printf("%c", j);
            if (j==1){
            break;
        }
        }
        printf("\n");
    }
}
