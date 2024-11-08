#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));
    random = rand()%100+1;
    printf("-------------------------------------------");
    printf("\n WELCOME TO  THE WORLD OF GUSSING NUMBER");

    do{
        printf("\n enter a number gussing between 1 to 100 ");
        scanf("%d",&guess);
        no_of_guess++;
        if (random >guess)
        {
            printf("\n user Guess is larger than random number");
        }
        else if (random <guess)
        {
            printf("\n user Guess is smaller than random number");
        }
        else{
            printf("\n Congratulation  !!! You have succesfully gussed the number in %d attempts ",no_of_guess);
        }
        
        

    }
    while(random != guess);
printf("thank for playing ");
    
}