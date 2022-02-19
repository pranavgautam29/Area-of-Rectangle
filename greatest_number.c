//Program to print the greatest of four numbers input by the user
#include<stdio.h>

int main(){
    int num1,num2,num3,num4;
    printf("Please Enter the first number\n");
    scanf("%d",&num1);
    printf("Please Enter the second number\n");
    scanf("%d",&num2);
    printf("Please enter the third number\n");
    scanf("%d",&num3);
    printf("Please Enter the fourth number\n");
    scanf("%d",&num4);//asking for the all four numbers
    if (num1>num2)//if num1 is greater than num2 this condition will proceed further or else it will break here and jump to the next condition
    {
        if (num1>num3)//if num1 is also greater than num3 this condition will proceed 
        {
            if (num1>num4)//if num1 is greater than num4 too then it'll print the result if not then num4 will be declared as the greatest number
            {
                printf("%d is the greatest number.",num1);//print statement if num1 is greatest
            }
            else
            printf("%d is the greatest number.",num4);//print statement if num4 is greatest
            
        }
        
        
    }
    if (num2>num1)//if num2 is greater than num1 it'll proceed further or else it will break here
    {
        if (num2>num3)//if num2 is greater than num3 then it'll proceed further
        {
         if (num2>num4)// comparison bw num2 and num4
         {
             printf("%d is the greatest number",num2);// if num2 is greatest 
         }
         else
        printf("%d is the greatest number",num4);// if num4 is greatest
            
        }
        
    }
    if (num3>num1)// comparison bw num3 and num1
    {
        if (num3>num2)//comparison bw num3 and num2
        {
            if (num3>num4)// comparison bw num3 and num4
            {
                printf("%d is the greatest number.",num3);//if num3 is the greatest 
            }
            else
            printf("%d is the greatest number.",num4);//if num4 is the greatest
            
        }
        
    }
    
    
   
    
     return 0;
}
