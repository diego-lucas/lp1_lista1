#include "function.h"
#include <iostream>

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect(const Ponto &IE, const Ponto &SD, const Ponto &P)
{

    location_t posicao;

    if (
        (((IE.x == P.x) | (P.x == SD.x)) & ((IE.y <= P.y) & (P.y <= SD.y))) |
        (((IE.y == P.y) | (P.y == SD.y)) & ((IE.x <= P.x) & (P.x <= SD.x))) |
        ((IE.x == P.x) & (IE.y == P.y)) |
        ((SD.x == P.x) & (SD.y == P.y)))
    {
        posicao = location_t::BORDER;
    }
    else if (((IE.x < P.x) & (P.x < SD.x)) & ((IE.y < P.y) & (P.y < SD.y)))
    {
        posicao = location_t::INSIDE;
    }
    else
    {
        posicao = location_t::OUTSIDE;
    }

    return posicao;
}
