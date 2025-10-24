#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**main-prints Hello,world
*
*Return:(0)
*/

int main(void)
{
        int a = 0;

        while(a < 26)
        {
                putchar('a'+ a);
		a++;
        }
	putchar('\n');
        putchar('\n');
        return 0;
}
