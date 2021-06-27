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
 * @tparam InputIt: iterator do range
 * @tparam Compara se a função é verdadeira para determinado valor bool eq(const string &a,  const string &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * 
 * @param pos: ponteiro que caminhara pelo range para comparar com o value e retornar sua posição
 */
template<class InputIt, class T, class Equal>
InputIt find(InputIt first, InputIt last, const T& value, Equal eq)
{
    for(InputIt pos=first;pos!=last;pos++){
        if(eq(*pos, value)){
            return pos;
        }
    }
    return last;
}

}
#endif
