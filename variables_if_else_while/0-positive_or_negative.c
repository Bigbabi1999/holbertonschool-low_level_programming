#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**main - prints Hello, world 
 *
 * Return:(0)
 */

int main(void)
{
	int (n);

	srand (time(0));
	(n) = rand () - RAND_MAX / 2;
	printf (" enter a number ");
		scanf ("%d",&n);
	if 	(n > 0){
 		printf (" %d is positive ",n);}
	else if (n == 0){
		printf (" %d is zero ",n);}
	else{
		printf (" %d is negative ",n);}
	
		scanf ("dont put alphabet in the number ");
	return (0);
}
