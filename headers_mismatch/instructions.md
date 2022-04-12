# Headers mistach between code files

In this excersice `add.h` made a forward declaration of `add()`, however `add()` has a different return type in `add.cpp`

## Compilation

(trying to) Compile:
```
noe$ g++ -std=c++17 main.cpp add.cpp -o main
add.cpp:4:5: error: ambiguating new declaration of 'int add(int, int)'
    4 | int add(int num1, int num2){
      |     ^~~
In file included from add.cpp:2:
add.h:3:7: note: old declaration 'float add(int, int)'
    3 | float add(int num1, int num2);
      |       ^~~
```