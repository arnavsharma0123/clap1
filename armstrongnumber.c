#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum, i, t, a;           // AN ARMSTRONG NUMBER IS DEFINED AS A NUMBER WHOSE SUM OF CUBES OF INDIVIDUAL DIGITS IS EQUAL TO THE NUMBER ITSELF 
    for (i = 1; i <= 500; i++)    // PROGRAM TO PRINT ALL ARMSTRONG NUMBERS FROM 1 TO 500 
    {
        t = i;
        sum = 0;
        while (t > 0)
        {
            a = t % 10;
            sum += a * a * a;
            t = t / 10;
        }

        if (sum == i)
        {
            printf("the armstrong number are %d \n",i);
        }
    }
    return 0;
}
