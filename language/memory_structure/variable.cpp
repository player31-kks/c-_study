#include <iostream>

class Cat
{
public:
    void printCat();

private:
    int age;
    float weight;
};

int main()
{
    std::cout << sizeof(Cat) << std::endl;
}