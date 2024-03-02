#include <memory>
#include <iostream>
#include <vector>

class Cat
{
public:
    Cat()
    {
        std::cout << "meow" << std::endl;
    };
    ~Cat()
    {
        std::cout << "bye~" << std::endl;
    };
};

int main()
{
    std::cout << "How many cats do u need?" << std::endl;
    int catCount;
    std::cin >> catCount;
    std::vector<Cat> cats(catCount);

    // delete를 불리지 않으면 위험할수 있다.
    int *ip = new int;
    *ip = 100;
    delete ip;

    int *iap = new int[5];
    iap[0] = 100;
    delete[] iap;

    // delete를 할 필요없음
    std::unique_ptr<int> uptr = std::make_unique<int>();
}