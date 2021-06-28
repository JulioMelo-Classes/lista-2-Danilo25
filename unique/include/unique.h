#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * @tparam InputIt iterator para o range.
 * @tparam bool eq(const string &a,  const string &b) compara a igualdade entre dois ponteiros
 * @tparam std::iter_swap(const T &a, const T &b) troca os valores entre os ponteiros
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * 
 * @param pos ponteiro que caminhara pelo range a procura de valores iguais
 * @param posc ponteiro que será comparado
 */

template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    InputIt pos=first,
            posc=first+1;

    while (posc != last)
    {
        if(eq(*pos,*posc)){
            std::iter_swap(posc, posc+1);
            posc++;
        }else{
            posc++;
        }
    }
    
    return pos;
}

}
#endif
