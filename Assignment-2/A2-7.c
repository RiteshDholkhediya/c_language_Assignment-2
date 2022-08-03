#include<stdio.h>
#include<conio.h>
int main(){
    int n,c=0;
    printf("Enter a number");
    scanf("%d",&n);
    while (n)
    {
        c++;
        
        if(n&1){
            break;
        }
        else{
            printf("\n");
            n = n>>1;
        }
        
    }
    printf("\n");
    printf("Postion of the 1 in LSB is : %d",c);
    getch();
    return 0; // note here we can also write " return n,c; " but it will only return last value which is c;
}