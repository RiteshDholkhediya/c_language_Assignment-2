#include<stdio.h>
#include<conio.h>
int main(){
    int n,d;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the digit");
    scanf("%d",&d);

    n = n*10 + d;
    printf("Resulting number is %d",n);
    return 0;


}
