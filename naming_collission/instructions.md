# Stituation
`sayHello()` is defined in both main.cpp and functions.cpp
this will cause a name collision

- Compile using:\
`g++ -std=c++17 main.cpp functions.cpp -o main`

# Result
```
noe@elementarylap: ~/Documentos/cpp_excersices/naming_collission $
g++ -std=c++17 main.cpp functions.cpp -o main

/usr/bin/ld: /tmp/ccD897HF.o:(.bss+0x0): multiple definition of `z'; /tmp/ccYzmW0E.o:(.bss+0x0): first defined here
/usr/bin/ld: /tmp/ccD897HF.o: in function `sayHello()':
functions.cpp:(.text+0x0): multiple definition of `sayHello()'; /tmp/ccYzmW0E.o:main.cpp:(.text+0x0): first defined here
collect2: error: ld returned 1 exit status
FAIL: 1

```

# Root cause
The compiler compiles each file with no problems.\
However, when the linker executes, it will link all the definitions in a.cpp and main.cpp together,
and discover conflicting definitions for function `sayHello()`.
The linker will then abort with an error.
Note that this error occurs even though `sayHello()` is never called!.\
Same for variable `z`, note there is NO problem with variable `n` as it is NOT declared in the global namespaces (aka global scope).

# Solution
Only define functions and variables once.