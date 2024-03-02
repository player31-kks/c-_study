#include <iostream>
#include <cstdint>
#include <array>

int main()
{
    static_assert(sizeof(int) == 4, "int is 4bytes");

    int a = 0;
    int b = 3;
    int c = a + b;
    double d = 2.5;
    std::cout << "a:" << &a << std::endl;
    std::cout << "b:" << &b << std::endl;
    std::cout << "c:" << &c << std::endl;
    std::cout << "d:" << &d << std::endl;

    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(int8_t) << std::endl;
    std::cout << sizeof(int64_t) << std::endl;

    std::array<int, 5> arr;
    std::cout << sizeof(arr) << std::endl;

    int nData = 10;
    int *pnData = &nData;
    std::cout << nData << std::endl;
    std::cout << &nData << std::endl;

    char strData[32] = {"You are a girl"};
    std::cout << &strData[4] << std::endl;
    std::cout << strData << std::endl;
}