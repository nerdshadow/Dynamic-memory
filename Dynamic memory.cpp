
#include <iostream>

int main()
{
    //creating dynamic array

    int n, m;
    int* pointer;
    std::cout << "How big array you want? ";
    std::cin >> n;
    pointer = new int[n]; //line that creates dynamic array
    for (m = 0; m < n; m++)
    {
        std::cout << "Enter number here: " << std::endl;
        std::cin >> pointer[m];
    }
    std::cout << "Your numbers: " << std::endl;
    for (m = 0; m < n; m++)
    {
        std::cout << pointer[m]<<", ";
    }
    delete[] pointer; //clearing memory

}
