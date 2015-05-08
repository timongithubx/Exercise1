/**
  * Version:0.0.1
  * Author: Timo N
  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * This is a main execution point of this application
  * @param argc number of command line arguments
  * @param argv pointer to array containing the cmd arguments
  * @return integer containing the exit status
  */
int main(int argc, char **argv){

    int read_status;
    int N = 1,
        M = 100;
    int right_answer;
    int user_guess;


    /* initialize random seed: */
    srand (time(NULL));

    /* generate secret number between 1 and 100: */
    right_answer = M + rand() / (RAND_MAX / (N - M + 1) + 1);
    printf("\n%d", right_answer);
    printf("\nTry to guess number between 1 and 100 (stop by entering number -1):\n");

    read_status = scanf("%d", &user_guess);
    while ( read_status != EOF && user_guess != -1 ){
        /* printf("arvaus:%d\n", user_guess); */
        if ( user_guess < 1 || user_guess > 100 ) {
            printf("Your guess is out of range!\n");
            break;
        }
        else if  ( user_guess < right_answer ) {
            printf("Your guess is smaller that the right answer\n");
        }
        else if  ( user_guess > right_answer ) {
            printf("Your guess is bigger that the right answer\n");
        }
        else {
            printf("Your got it right!\n");
            break;
        }

        read_status = scanf("%d", &user_guess);
    }



    return 0;
}
