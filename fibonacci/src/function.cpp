#include <iostream>
#include "function.h"

std::vector<unsigned int> fib_below_n(unsigned int n)
{
    int n1 = 1;
    int n2 = 1;
    int temp;
    std::vector<unsigned int> vetor;

    // Caso o n for menor ou igual a 1, o vetor será vazio
    if (n <= 1)
        vetor = {};
    else
        vetor = {1};

    while (n2 < n)
    {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        // Adicionando item ao vetor
        vetor.push_back(n1);
    }

    return vetor;
}
