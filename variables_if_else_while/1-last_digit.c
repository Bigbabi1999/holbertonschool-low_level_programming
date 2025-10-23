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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 if      (n > 0){
                ("%d is positive\n",n);}
        else if (n == 0){
                ("%d is zero\n",n);}i;
        else {
                printf ("%d is negative\n",n);}
	return (0);
}
