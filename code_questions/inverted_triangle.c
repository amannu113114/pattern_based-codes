#include<stdio.h>
int main (void){
    int n,j;
    scanf("%d",&n);
    for (int i =n; i>=1;--i){
        for (j=i ; j>=1;j--){
            printf("%d", j);
            if (j==1){
            break;
        }
        }
        printf("\n");
    }
}
