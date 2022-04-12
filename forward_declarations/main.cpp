#include <iostream>

int foo(int n);
void bar();
char moon(char w, int c);

int main(){
    std::cout << foo(10) << '\n';
    bar();
    std::cout << moon('A', 1) << '\n';
    return 0;
}

int foo(int n){
    return n;
}
void bar(){
    std::cout << "20" << '\n';
}
char moon(char w, int c){
    return w+c;
}