#include<stdio.h>
int main (void){
    int n,a,b,k;
    
    scanf("%d",&k);
    if (k%2==0){
        n=k+1;
    }else{
        n=k;
    }
    for (int i =1; i<=n;i++){
        for (int j=1 ; j<=n;j++){
            if (k%2==0){
                if (i==((k/2)+1)||j==((k/2)+1)){
                    printf(" ");
                }
                else if (i==j||((j+i)==(n+1))){
                    printf("*");
                }else{
                        printf(" ");
                }
            }
            else{
                if (i==j||((j+i)==(n+1))){
                    printf("*");
                }else{
                        printf(" ");
                }
                
            }
        }
    }
        printf("\n");
}
        
//  
