#include <iostream>



#if 0
/* #if 0 is called conditional compilation preprocessor directive
it is to exclude a block of code from being compiled (as if it were
inside a comment block).

This provides a convenient way to “comment out” code that contains
multi-line comments (which can’t be commented out using another
multi-line comment due to multi-line comments being non-nestable)*/

// There is also a name collission for headers:

#include "bonus.hpp"
void foo(){}
int bar{};

/*
Result:
noe@elementarylap: ~/Documentos/cpp_excersices/naming_collission $ g++ -std=c++17 main.cpp functions.cpp -o main                                                           [13:49:15]

main.cpp:4:6: error: redefinition of 'void foo()'
    4 | void foo(){}
      |      ^~~
In file included from main.cpp:2:
bonus.h:1:6: note: 'void foo()' previously defined here
    1 | void foo(){}
      |      ^~~
main.cpp:6:5: error: redefinition of 'int bar'
    6 | int bar{};
      |     ^~~
In file included from main.cpp:2:
bonus.h:3:5: note: 'int bar' previously defined here
    3 | int bar{};
      |     ^~~
FAIL: 1
*/
#endif

using namespace std;

void sayHello(){
    cout << "Hi there!" << endl;
}

int z;

int main(){
    int n;
    return 0;
}