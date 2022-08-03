#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);

    if(a%2 & 1)
        printf("Odd Number");
    else{
        printf("Even Number");
    }
    return 0;
}
