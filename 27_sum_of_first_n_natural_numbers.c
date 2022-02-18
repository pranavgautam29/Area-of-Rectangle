#include<stdio.h>

int main(){
    int i=0,sum=0,n;
    printf("Enter the value:\n");
    scanf("%d",&n);
  do
  {
      sum+=i;
      i++;
  } while (i<=n);
  
    printf("The sum of first %d natural numbers is %d\n",n,sum);
    
     return 0;
}