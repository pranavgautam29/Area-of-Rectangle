//program to find the factorial of a number entered by the
#include<stdio.h>

int main(){
    int f,a=1;
    printf("Enter the number:");
    scanf("%d",&f);
    for (int i = f ; i ; i--)
    {
        a=a*i;
    }
    printf("Factorial of %d is %d",f,a);
     return 0;
}