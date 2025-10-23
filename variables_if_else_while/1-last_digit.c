#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**main-prints Hello,world
*
*Return:(0)
*/


int main(void)
{
	int n;
	int last_digit;

	n = 98;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	       (last_digit = n % 10){
         if	(last digit > 5){      
		printf ("Last digit of %d and is greater than 5\n",n,last_digit);}
        else if (last_digit == 0){
                printf ("Last digit of %d and is 0\n",n,last_digit);}
	 else{
                printf ("Last digit of %d and is less than 6 and not 0\n",n,last_digit);}
	return (0);
}
