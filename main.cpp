#include <iostream>
#include <ctime>
#include <string>
#include "array_list.hpp"

int main()
{
    srand(time(0));
    Array<double> arr(20);
    for(int i = 0 ; i < 50; ++i)
        arr.add(rand() % 100);
    for(size_t i = 0 ; i < arr.size(); ++i)
        std::cout << "arr[" << i <<  "] = " << arr[i] << std::endl;
    std::cout << std::endl;
    printf("Mine elemement = %15.8f\n Max element = %15.8f\n",
           arr.fetchMin(), arr.fetchMax());
    std::cout << "Index of 7: " << arr.search(7) << std::endl;
    std::cout << "Arr load factor = " << arr.loadFactor() * 100 << "%" << std::endl;
    printf("\nTest of operator []\n");
    Array<int> arr2(20);
    for(int i = 1; i <= 20; ++i)
        arr2.add(i * i);
    for(size_t i = 0; i < arr2.size(); ++i)
        std::cout << "arr2[" << i <<  "] = " << arr2[i] << std::endl;
    std::cout << " arr2[1] = 200; arr2[5] = 300; " << std::endl;
    arr2[1] = 200;
    arr2[5] = 300;
    auto x = arr2[17];
    for(size_t i = 0 ; i < arr2.size(); ++i)
        std::cout << "arr2[" << i <<  "] = " << arr2[i] << std::endl;
    std::cout << "X = " << x <<  std::endl;

    arr2.removeAt(5);
    std::cout << "Remove fifth element" << std::endl;

    for(size_t i = 0 ; i < arr2.size(); ++i)
        std::cout << "arr2[" << i <<  "] = " << arr2[i] << std::endl;
    std::cout << "X = " << x <<  std::endl;

    Array<int> arr3(arr2);
    for(size_t i = 0 ; i < arr3.size(); ++i)
        std::cout << "arr3[" << i <<  "] = " << arr3[i] << std::endl;
    return 0;
}
