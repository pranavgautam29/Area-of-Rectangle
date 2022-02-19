//program to print the tables of any number till 10 multiples
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number:");//asking for input
    scanf("%d",&n);//reading input
    for (int i = 0; i <=10; i++)//intialised for loop for multiplication
    {
        printf("%d X %d = %d\n",n,i, n*i);//printing final result
    }
    
     return 0;
}
