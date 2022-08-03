#include<stdio.h>
#include<conio.h>

int main(){
    int n,a;
    printf("Enter a number");
    scanf("%d",&n);
    a=n;
    n=n/10;
    n=n*10;
    printf("%d new value id %d",a,n);
    getch();

}
