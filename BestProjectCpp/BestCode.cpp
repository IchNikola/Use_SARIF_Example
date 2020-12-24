#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    int a = 0;
    a = a;
} 

void ff(float array[3])
{
    size_t n = sizeof(array) / sizeof(array[0]);
    for (size_t i = 0; i != n; i++)
        array[i] = 1.0f;
}