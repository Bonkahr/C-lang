#include <iostream>
#include <array>
// #include "fmt/format.h"

using namespace std;


int main()
{

    // initilaizing an array
    array<int, 5> n;

    // Initializing the array using a loop

    for (size_t i{0}; i < n.size(); ++i)
    {
        n.at(i) = i * 2;
    }

    cout << "Array size: " << n.size() << endl;
    cout << "2nd elememt in the array: " << n.at(1) << endl;

    // Initializing an array at creation time

    array<int, 7> arr{6, 5, 8, 3, 8, 9, 7};

    for (size_t j{0}; j < arr.size(); j++)
    {
        cout << "Element at " << j << ": " << arr.at(j) << endl;
    }

    // for with ranges

    for (const int item : arr)
    {
        cout << "Item is: " << item << endl;
    }
        return 0;
}