#include<stdio.h>
int main (void){
    int lenght ,breadth , area;
    
    printf("enter the lenght and breadth of the rectangle\n");
    scanf("%d %d", &lenght, &breadth);
    area = lenght * breadth;
    

    printf("%d", area);

}