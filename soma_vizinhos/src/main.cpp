/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
#include <iomanip>

int main()
{
    int m;
    int n;

    // O primeiro cin sempre eh o "m", e logo depois vem o "n"
    while (std::cin >> std::ws >> m)
    {
        std::cin >> std::ws >> n;
        int result = 0;

        for (int i = 0; i < abs(n); i++)
        {
            if (n > 0)
            {
                result += m++;
            }
            else if (n < 0)
            {
                result += m--;
            }
        }

        if (n == 0)
        {
            result = m;
        }

        std::cout << result << std::endl;
    }

    return 0;
}
