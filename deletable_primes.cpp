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
   if(n <= 1)
   {
     return false;
   }
   for(int i = 2; i <= sqrt(n); i++)
   {
    if(n%i == 0)
    {
      return false;
    }
   }
   return true;
 }

 int get_length(unsigned long n)
 {
   if(n == 0){
     return 1;
   }
   return floor(log10(n))+1;
 }

 unsigned long remove_digit(int index, unsigned long n)
 {
   int lastDigits = 0;

   if(index > get_length(n))
   {
     return n;
   }
   lastDigits = n % (int)pow(10, index);
   n /= pow(10,index+1);
   return n*pow(10, index)+lastDigits;
 }

 int get_ways(unsigned long p)
 {
   if(!is_prime(p))
   {
     return 0;
   }
   if(p<10)
   {
     return 1;
   }
   int count = 0;
   for(int i = 0; i < get_length(p); i++)
   {
     count += get_ways(remove_digit(i, p));
   }
   return count;
 }
