#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    int a = 0;
    a = a;
} 

int SkipParenthesize(int a)
{
    return a * rand() / 100;
}

void ff(int a, int b)
{
    a = SkipParenthesize(a);
    b = SkipParenthesize(a);
}