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
        if(n > 1 && n % n == 0)
        {
            
            
            return true;
        }
        
        {
            if(n < 1 && n % n != 0)
            {
                
            }
        }
    }

int main()
{
    // Complete your homework here

    // std::cout << "meow meow meow meow meow meow meow meow meow";

    std::cout << "enter number:";
    int x; 
    std::cin >> x;
    
    std::cout << isPrime(x) << std::endl;

 

    
    return 0;
}
