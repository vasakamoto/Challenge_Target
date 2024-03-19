#include <stdio.h>
#include <stdlib.h>

int sum_till_index(int index)
{
    int k = 0, sum = 0;

    while(k < index)
    {
        k++;
        sum += k;
    }

    return sum;
}

int in_fibonacci(int n)
{
    int last_value;
    int last_two[2] = {0, 1};
    if(n == 0)
    {
        printf("Fibonacci sequence contains %d", n);
        return 1;
    }
    while (last_value < n)
    {
        last_value = last_two[0] + last_two[1];
        if(n == last_value)
        {
            printf("Fibonacci sequence contains %d", n);
            return 1;
        }
        last_two[0] = last_two[1];
        last_two[1] = last_value;
    }

    printf("Fibonacci don't contains %d", n);
    return 0;
}

int str_len(char * str)
{
    int length = 0;
    while(*str)
    {
        length++;
        str++;
    }
    return length;
}


char * reverse(char * str)
{
    int length = str_len(str);
    char * reversed;
    for(int x = 0; x < length; x++)
    {
        reversed += x;
        reversed = (str + length - x - 1);
        printf("%c", *reversed);
    }
    return reversed;
}

int main()
{
    int n_for_ex2;
    char * str_for_ex5;
    printf("\nEx1 - Value of the sum of 13 indexes to k");
    printf("\n\t\tValue = %d", sum_till_index(13));
    printf("\n____________________________________\n");
    printf("\nEx2 - Verify if number is contained in Fibonacci sequence");
    printf("\nEnter an integer value to verify if Fibonacci sequence contains it:  ");
    scanf("%d", &n_for_ex2);
    in_fibonacci(n_for_ex2);
    printf("\n____________________________________\n");
    printf("\nEx3 - Discover *next value*");
    printf("\na) 1, 3, 5, 7, *9*\nb) 2, 4, 8, 16, 32, 64, *128*\nc) 0, 1, 4, 9, 16, 25, 36, *49*");
    printf("\nd) 4, 16, 36, 64, *100*\ne) 1, 1, 2, 3, 5, 8, *13*\nd) 2, 10, 12, 16, 17, 18, 19, *200*");
    printf("\n____________________________________\n");
    printf("\nEx4 - Find which light bulb is related to which ligh switch checking only 2 times");
    printf("\n\tI would first turn on 2 switches, check which are on, then would turn one off and see which light bulb would be turned off"); 
    printf(" . Would note which is which, then, the remainder switch would be the one that did not changed");
    printf("\n____________________________________\n");
    printf("\nEx5 - reverse string: ");
    scanf("%s", str_for_ex5);
    reverse(str_for_ex5);
}
