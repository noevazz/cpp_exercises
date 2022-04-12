#include <iostream> // imports the declaration of std::cout

using namespace std; // makes std::cout accessible as "cout"

int cout() // declares our own "cout" function in the global namespace
{
    return 5;
}

int main()
{
    cout << "Hello, world!"; // Compile error!  Which cout do we want here?  The one in the std namespace or the one we defined above?

    return 0;
}

/*
Execution:

main.cpp: In function 'int main()':
main.cpp:12:5: error: reference to 'cout' is ambiguous
   12 |     cout << "Hello, world!"; // Compile error!  Which cout do we want here?  The one in the std namespace or the one we defined above?
      |     ^~~~
In file included from main.cpp:1:
/usr/include/c++/9/iostream:61:18: note: candidates are: 'std::ostream std::cout'
   61 |   extern ostream cout;  /// Linked to standard output
      |                  ^~~~
main.cpp:5:5: note:                 'int cout()'
    5 | int cout() // declares our own "cout" function in the global namespace
      |     ^~~~
FAIL: 1

*/