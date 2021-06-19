#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
std::string pt_in_rect(const Ponto &IE, const Ponto &SD, const Ponto &P)
{

    std::string posicao;

    // 7 9   2 2   2 7 = border

    if ((IE.x == SD.x) & (IE.y == SD.y))
    {
        posicao = "invalid";
    }
    else if (
        (((IE.x == P.x) | (P.x == SD.x)) & ((IE.y <= P.y) & (P.y <= SD.y))) |
        (((IE.y == P.y) | (P.y == SD.y)) & ((IE.x <= P.x) & (P.x <= SD.x))) |
        ((IE.x == P.x) & (IE.y == P.y)) |
        ((SD.x == P.x) & (SD.y == P.y)))
    {
        posicao = "border";
    }
    else if (((IE.x < P.x) & (P.x < SD.x)) & ((IE.y < P.y) & (P.y < SD.y)))
    {
        posicao = "inside";
    }
    else
    {
        posicao = "outside";
    }

    return posicao;
}