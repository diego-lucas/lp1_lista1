#include "function.h"
#include <iostream>

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int, int> min_max(int V[], std::size_t n)
{

    // Usando a classe pair, onde o primeiro elemento eh o valor
    // do maior/menor item, e o segundo elemento eh a posicao
    std::pair<int, int> min{V[0], 0};
    std::pair<int, int> max{V[0], 0};

    // Caso o vetor seja vazio, as posicoes do min/max devem ser -1
    if (n == 0)
        min = {0, -1}, max = {0, -1};

    for (int i = 0; i < n; i++)
    {
        if (V[i] < min.first)
            min = {V[i], i};

        if (V[i] >= max.first)
            max = {V[i], i};
    }

    return {min.second, max.second};
}
