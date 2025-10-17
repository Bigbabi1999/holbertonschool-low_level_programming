#include <stdlib.h>
#include <time.h>
/* Headers here */

/* main - prints Hello, world
* Return: 0 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code here */
	return (0);
}
