#include<stdio.h>
int main (void){
    int n;
    scanf("%d",&n);
    int k,l;
    if (n%2!=0){
        k=(n+1)/2;
    }
    else {
        k=n/2;
        l=k+1;
    }
    for (int i =1; i<=n;i++){
        for (int j=1; j<=n;j++){
            if (j==k||i==k||i==l||j==k){
                printf("* ");
            }
            else if (j==k||j==l){
                printf("* ");
            }
            else{
                printf("  ");
            }
            

        }
        printf("\n");
    }
}