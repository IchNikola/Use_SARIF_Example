#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    int a = 0;
    a = a;
} 

int DoSomething(int a)
{
    return a * rand() / 10;
}

int ff(int a, int b) 
{
    a = DoSomething(a);
    b = DoSomething(a);
    return a + b;
}