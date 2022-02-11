/*Q 3. write a c program to enter  the radius of aa circle and find
its diameter , circmference and area */
#include<stdio.h>

int main(){
    int x;

    printf("Enter the radius here : ");
    scanf("%d", &x);

    float area=(22/7)*x*x;
    float circumference=(22/7)*2*x;
    float dia=x/2;
    
    pirntf("%f\n",&area);
    
    pirntf("%f\n",&dia);
    
    pirntf("%f\n",&circumference);
    
    return 0;
}