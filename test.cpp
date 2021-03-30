// #include<stdio.h>
// #include<stdlib.h>

// int main(){
// int start = 0;
// int end = 10;
// srand(3.0);
// printf("%d", ((int)rand() % (end - start + 1)) + start);

// }
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, n;
    time_t t;

    n = 5;
    int start = 0;
    int end = 10;

    /* Intializes random number generator */
   srand(time(NULL));

    /* Print 5 random numbers from 0 to 49 */
    for (i = 0; i < n; i++)
    {

        printf("%d\n", ((int)rand() % (end - start + 1)) + start);
    }

    return (0);
}
