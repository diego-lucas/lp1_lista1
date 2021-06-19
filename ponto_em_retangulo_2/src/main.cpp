/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
#include <iomanip>
#include <algorithm>
using std::max;
using std::min;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.

int main(void)
{

    int R1x, R1y, R2x, R2y, Px, Py;

    while (std::cin >> std::ws >> R1x)
    {
        std::cin >> std::ws >> R1y >> std::ws >> R2x >> std::ws >> R2y >> std::ws >> Px >> std::ws >> Py;
        Ponto R1{min(R1x, R2x), min(R1y, R2y)}, R2{max(R1x, R2x), max(R1y, R2y)}, P{Px, Py};

        std::cout << pt_in_rect(R1, R2, P) << std::endl;
    }

    return 0;
}
