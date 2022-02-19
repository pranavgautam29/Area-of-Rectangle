#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(0));
    number=rand()%100+1;
    int guess,nguess=1;
    do
    {
        printf("Guess the number between 1 to 100:");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower Number Please!\n");

        }
        else if(guess<number){
        printf("Higher Number Please!\n");
        }
        else
        printf("Congratulations ! You guessed it right in %d attempts!\n",nguess);
        nguess++;
    } while (guess!=number);
    
    
     return 0;
}