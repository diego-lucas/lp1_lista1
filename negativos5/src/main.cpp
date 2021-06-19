#include <iostream>
#include <iomanip>

const int SIZE = 5; // input size.

int main(void)
{

    int temp;
    int negative_counter = 0;

    while (std::cin >> std::ws >> temp)
    {
        if (temp < 0)
        {
            negative_counter++;
        }
    }

    std::cout << negative_counter << std::endl;

    return 0;
}
