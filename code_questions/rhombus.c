#include<stdio.h>
int main (void){
    int row,i,j,k;
    scanf("%d", &row);
    for (i=1;i<=row;i++){
        for (j=1;j<=row-i;j++){
            printf(" ");
        }
        for (k=1;k<=row;k++){
            printf("* ");
        }
        printf("\n");
    }

}