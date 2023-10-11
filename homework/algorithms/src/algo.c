
//  Created by Joseph Quick on 10/10/23.
//
// note: i completed this with each one seperate, not knowing what the hell I was doing. had this completed the night before, but now I am scrambling to have it fit in the github formatting. big mistake on my part. However, it is both a trial by fire getting everything to work together (and rewriting previously done solutions), alongside a lesson not to wait until 2-3 days before assignment is due/not checking github. oops
//I also may have over commented.

#include "Algo.h"
#include <stdio.h>

//despite being at the top, this was made seperate half way through. It fit okay at the top, and needed to be here before the prime number solutions as this runs as a check for prime numbers.
int checkPrime(const int n)
{
    //f = a flag
    int f = 1;
    //same for loop as the fib problem. The only difference was adding /2 to n as prime numbers must not be divisable by two.
    for (int i = 2; i <= n / 2; i++)
    {
        //chekcs if i is divisable by n
        if (n % i == 0)
        {
            //if n if not prime, the flag is tripped and breaks
            f = 0;
            break;
        }
    }
//returns the flag, if t = 1, number is prime, if t = 0 number is not prime
    return f;
}

//iterative
//origanlly i did it recursivly, however, I could not wrap my brain around doing it without an int main() to console. got desperate and scratched it. after i realized that i put everything down as ints instead of long. took refuge from this video https://youtu.be/D59HhCkcmNA?si=tTjOckHkHRX_9qVT
long fibonacci(const int n)
{
   
        //intalize a
        long a = 0;
        //intalize b
        long b = 1;
        //varible holder (would it be better to put 0 or leave blank? seesm to make no difference
        long c;
        
    {
        //for loop
        //first two numbers 0 and 1 are accounted for, thus starts with i = 2
        //with i <= n loop will continue until equal or less than n
        //i iterates by 1
            for (int i = 2; i <= n; i++)
            {
                //adds a and b to get c.
                //adds each a and b each itteration and then will store c
                c = a + b;
                //updates a to b
                a = b;
                //updates b to c or varible holder (fib number)
                b = c;
            }
            //prints to console with given n unit, and c the fibonacci number
            printf("%d's Fibonacci number = %ld\n", n, c);
            
            //returns c or fib number
            return c;
        }
    }


//compared to last, much of the code is similar to the one I already did.
int reverse(const int n)
{
    //flip is set to be the reversed number, needs to be zero as values will be added
    int flip = 0;
    //intalize
    int a = n;
    //placed up here as it would output 0 because of while loop
    printf("Original number: %d\n", a);
    //while loop is set to run besides when first integer = 0
    while (a != 0)
    {
        //this removes the last digit of the orignal number and outputs it as the flipped number. it does it until the loop of the orignal reaches 0. Which is why the (n !=0) frome above is important.
        int ld = a % 10;
        //this is the part the that takes the last digit (ld) and outputs into the flip
        flip = flip * 10 + ld;
        //this breaks down the orignal int and eventally will trigger the loop to stop once it hits 0
        a /= 10;
    }
    //flip takes each of the digits and pushes them out while
    printf("Reversed number: %d\n", flip);
    
    return flip;
    
}
//uses checkPrime from top of page.
int prime_factor(const int n)
{
    //initalized at 0 as it will be a value holder
    int hpf = 0;

    //for loop same as fib. Basically just checks n by i each iteration
     for (int i = 2; i <= n; i++)
     {
         //if n is divided by i, and i is prime from the checkPrime, hpf will be set as i
         if (n % i == 0 && checkPrime(i))
         {
             hpf = i;
         }
     }
    //prints to console, n is from c main, hpf is value found.
     printf("Highest Prime Factor of %d = %d\n", n, hpf);
//return
     return hpf;
 }


//will use previously made checkPrime
int prime_sum(const int n)
{
    //intalize value holder
        int v = 0;
        //for loop, checks n by i for each iteration
        for (int i = 2; i <= n; i++)
        {
            // if i is a prime number, it will add i to v
            if (checkPrime(i))
            {
                //adds i to v is checkPrime is true, v is holder for the sum
                v += i;
            }
        }
    //prints out the n and v to console.
    printf("sum of prime numbers below %d is %d\n", n, v);

        return v;
}





  




