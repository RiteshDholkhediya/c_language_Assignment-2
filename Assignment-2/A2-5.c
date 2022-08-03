#include<stdio.h>
#include<conio.h>
int main(){
    int n,sum=0;
    printf("Enter two numbers");
    scanf("%d",&n);
    while(n){
        sum = sum+n%10;
        n=n/10;
    }
    printf("Sum is %d",sum);
    getch();
}
