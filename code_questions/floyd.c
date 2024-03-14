#include<stdio.h>
int main (void){
    int n;
    int p =1;
    scanf("%d",&n);
    for (int i =0; i<=n+0;i++){
        for (int j=0 ; j<=i;j++){
            printf("%d ",p);
            p++;

        }
        printf("\n");
    }
}