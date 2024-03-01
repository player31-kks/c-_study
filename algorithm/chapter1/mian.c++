#include <iostream>
#include <array>
#include <vector>

using namespace std;

void next_distinct(const vector<int> &arr, int &x)
{
    do
    {
        ++x;
    } while (x < arr.size() && arr[x - 1] == arr[x]);
}

void SumArray(const vector<int> &arr1, const vector<int> &arr2)
{
    int firstPoint = 0;
    int secondPoint = 0;

    vector<int> sumArray;

    while (firstPoint < arr1.size() && secondPoint < arr2.size())
    {
        int firstValue = arr1[firstPoint];
        int secondValue = arr2[secondPoint];

        if (firstValue > secondValue)
        {
            sumArray.push_back(secondValue);
            next_distinct(arr2, secondPoint);
        }
        else if (secondValue > firstValue)
        {
            sumArray.push_back(firstValue);
            next_distinct(arr1, firstPoint);
        }
        else
        {
            sumArray.push_back(firstValue);
            next_distinct(arr1, firstPoint);
            next_distinct(arr2, secondPoint);
        }
    }

    while (firstPoint < arr1.size())
    {
        sumArray.push_back(arr1[firstPoint++]);
    }
    while (secondPoint < arr2.size())
    {
        sumArray.push_back(arr1[secondPoint++]);
    }

    for (auto &num : sumArray)
    {
        cout << num << endl;
    }
}

int main()
{
    int x = 10;
    int y = ++x;
    cout << y << x;
}
