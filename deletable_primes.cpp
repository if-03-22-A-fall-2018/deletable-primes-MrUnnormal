/*----------------------------------------------------------
 *				HTBLA-Leonding / Class
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			deletable_primes.c
 * Author:			P. Bauer
 * Due Date:		October 16, 2012
 * ----------------------------------------------------------
 * Description:
 * Implementation of deletable_primes.h.
 * ----------------------------------------------------------
 */
#include "deletable_primes.h"
#include <math.h>

 bool is_prime(unsigned long n)
 {
   bool isPrime = true;
   for (int i = 2; i < sqrt(n); i++)
   {
     isPrime = n % i > 0;
     if(isPrime == false)
     {
       return false;
     }
   }
   return true;
 }

 unsigned long remove_digit(int index, unsigned long n)
 {
   return 0;
 }

 int get_ways(unsigned long p)
 {
   return 0;
 }
