#include<stdio.h>
int main (void){
    int n;
    scanf("%d",&n);
    for (int i =1; i<=n;i++){
        for (int j=1 ; j<=i;j++){
            printf("%d", (2*j-1));
        }
        printf("\n");
    }
}