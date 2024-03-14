#include<stdio.h>
int main (void){
    int n;
    scanf("%d",&n);
    for (int i =0; i<=n;i++){
        for (int j=1 ; j<i+1;j++){
            if (i%2==0){
                printf("%c", j+64);
            }else{
                printf("%d", j);
            }

        }
        printf("\n");
    }
}