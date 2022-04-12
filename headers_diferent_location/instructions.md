# Headers in different locations

You can specify the location of your headers if it is different from your current directory:
```
noe$ $ tree .
.
|-- add.cpp
|-- instructions.md
|-- main.cpp
`-- source    <--- Note that I have my headers at ./source/includes
    `-- includes
        `-- add.h

2 directories, 4 files
```

Use the `-I` (upper case **i**) to specify the location of your headers.


## Compilation

```
noe$ g++ -std=c++17 -I ./source/includes  main.cpp add.cpp -o main 
# no output which means the compilations was fine
```

You can confirm the executable `main` was created:
```
.
|-- add.cpp
|-- instructions.md
|-- main   <--- Executable
|-- main.cpp
`-- source
    `-- includes
        `-- add.h
```

## Execution

```
noe$ ./main
6
21
```