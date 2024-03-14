#include<stdio.h>
int main (void){
    int n;
    scanf("%d",&n);
    for (int i =0; i<=n;i++){
        for (int j=65; j<i+65;j++){
            printf("%c", j);

        }
        printf("\n");
    }
}