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
 *
 * @tparam InputIt: iterator do range
 * @tparam Compara se a função é verdadeira bool p( const Type &a)
 * 
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * 
 * @param pos: ponteiro que caminhara pelo range para verificar a condição e retornar sua posição
 * 
 */
template<class InputIt, class UnaryPredicate>
InputIt find_if(InputIt first, InputIt last, UnaryPredicate p)
{
    for(InputIt pos=first;pos!=last;pos++){
        if(p(*pos)){
            return pos;
        }
    }
    return last;
}

}
#endif
