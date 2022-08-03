#include<stdio.h>
#include<conio.h>
int main(){
    int n, mod;
    printf("Enter three digit number ");
    scanf("%d",&n);
    mod = n%10;
    n = n/10;
    mod = mod*100 + n;
    printf("Rotated value is %d",mod);
    getch();
}
