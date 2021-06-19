/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
#include <iomanip>
// [0; 25), [25; 50), [50; 75), [75; 100)

int main(void)
{

    double intervalo_1 = 0, intervalo_2 = 0, intervalo_3 = 0, intervalo_4 = 0, fora_do_intervalo = 0;
    int num, contador = 0;

    while (std::cin >> std::ws >> num)
    {
        contador++;
        if (num >= 0 & num < 25)
            intervalo_1++;
        else if (num >= 25 & num < 50)
            intervalo_2++;
        else if (num >= 50 & num < 75)
            intervalo_3++;
        else if (num >= 75 & num < 100)
            intervalo_4++;
        else
            fora_do_intervalo++;
    }

    std::cout << std::setprecision(4) << (intervalo_1 / contador) * 100 << std::endl;
    std::cout << std::setprecision(4) << (intervalo_2 / contador) * 100 << std::endl;
    std::cout << std::setprecision(4) << (intervalo_3 / contador) * 100 << std::endl;
    std::cout << std::setprecision(4) << (intervalo_4 / contador) * 100 << std::endl;
    std::cout << std::setprecision(4) << (fora_do_intervalo / contador) * 100 << std::endl;

    return 0;
}
