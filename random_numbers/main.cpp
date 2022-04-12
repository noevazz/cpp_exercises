#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
    std:srand(std::time(NULL));
    for (int i=0; i<10; i++)
        std::cout << "Here is a pseudo-random number between 1 and 10: " << rand()%10+1 << '\n';
    return 0;
}

/*
rand() returns a pseudo-random number between 0 and 2147483647.
We can scale the results by using the modulus:
rand()%mynumber will return a number between 0 and mynumber-1.

srand() sets the seed for pseudo-random numbers. srand() and rand() are found in std::cstdlib

time(NULL) returns the number of seconds elapsed since 00:00:00 hours, UTV, January 1, 1970. time() is found in std::ctime 
*/