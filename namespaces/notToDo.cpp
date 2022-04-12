#include <iostream>

using namespace std;

// All of the following statements are part of the global namespace:
// okay: function forward declaration in the global namespace:
void foo();
// compiles but strongly discouraged: uninitialized variable definition in the global namespace
int x;
// compiles but discouraged: variable definition with initializer in the global namespace
int y { 5 };
/*
Only declarations and definition statements can appear in the global namespace.
This means we can define variables in the global namespace, though this should
generally be avoided. This also means that other types of statements (such as expression statements)
cannot be placed in the global namespace (initializers for global variables being an exception):
*/

// compile error: executable statements not allowed in the global namespace
x = 5;

/*
Execution:

noe@elementarylap: ~/Documentos/cpp_excersices/namespaces $ gcc -std=c++17 notToDo.cpp -o notToDo                                                                          [14:05:53]
notToDo.cpp:20:1: error: 'x' does not name a type
   20 | x = 5;
      | ^
FAIL: 1

*/




// okay: another function forward declaration in the global namespace
void goo();

// okay: function definition in the global namespace
int main(){
    return 0;
}