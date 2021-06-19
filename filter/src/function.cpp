#include "function.h"

#include <iostream>

/*! 
 * Remove negative and zero values from an array, preserving the
 * relative order of the original values that will remain in the
 * resulting array.
 * We do not alter the origimal memory associated withe the input
 * array. Rather, we just rearrange the values inside the array
 * and return a pointer to the new 'logical' end of the array,
 * after the processes of eliminating the required elements is
 * finished.
 *
 * @param first Pointer to the beginning of the range we want to filter.
 * @param last Pointer just past the last valid value of the range we want to filter.
 * @return a pointer to the new 'logical' end of the array.
 */

int *filter(int *first, int *last)
{
    int i = 0;
    int size = last - first;
    int contador_positivos = 0;

    while (i < size)
    {
        // Se o valor da posição atual for positivo, ele substitui o valor
        // a partir de: (ponteiro first) + (quantidade de positivos até o momento)
        if (*(first + i) > 0)
        {
            *(first + contador_positivos++) = *(first + i);
        }
        i++;
    }

    return first + contador_positivos;
}
