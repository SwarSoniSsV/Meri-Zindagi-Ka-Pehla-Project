#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int nog=0;
int g;
int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

do
{
   printf("Enter the number : ");
   scanf("%d",&g);
   if(randomNumber>g){
    printf("Higher number please\n");
   }
   else if(randomNumber==g){
    printf("You have guessed the number is %d\n",randomNumber);
   }
   else{
    printf("Lower  Number please\n");
   }
   nog++;
} while (randomNumber!=g);
printf("The no of guesses you have is : %d",nog);

     
    return 0;
}
