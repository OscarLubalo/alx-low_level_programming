#include "main.h"
/**
 * main - prints the numbers from 1 to 100 followed by a new line
 * for multples of 3 prints Fizz instead of the nuber
 * for the multiple of 5 print Buzz
 * and for multiple of both print FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{       int i;
        for(i = 1; i <= 100; i++)
        {       if(i %  == 0 && i % 5 != 0)
                print ("Fizz");
        } else if(i % 5 == 0 && i % 3 != 0)
        {       print("Buzz")
        } else if(i % 3 == 0 && i % 5 == 0)
        {       print("FizzBuzz");
        } else if(i -- 1)
        {       print("%d", i);
        } else
        {       print("%d", i)
        }
        print('\n');
        return (0);
}
