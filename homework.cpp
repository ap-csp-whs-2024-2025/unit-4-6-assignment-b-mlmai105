/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector
   
   //prob 1
   int isPrime(int n)
    {
        int factor = 2;

        // the number 1 is not prime
        if (n == 1)
        {
            return false;
        }
        else
        {
            while (factor < n)
            {
                if (n == n /* n is divisible by the factor */)
                {
                    return false;
                }
                factor = factor + 1;
            }

            return true;
        }
        
    }

int main()
{
    // Complete your homework here

    // std::cout << "meow meow meow meow meow meow meow meow meow";

    std::cout << "enter number:";
    int x; 
    std::cin >> x;
    
    std::cout << isPrime(x);

 

    
    return 0;
}
