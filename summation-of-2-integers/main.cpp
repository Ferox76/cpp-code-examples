#include <iostream>


int add(int a, int b)
{
    return a + b;
}


int main()
{
    std::cout << "Summation of 2 integers" << std::endl;
    int a = 5;
    int b = 6;
    std::cout << "a + b = " << add(a, b) << std::endl;
    return 0;
}