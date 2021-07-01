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
 * @tparam InputIt: iterador do range
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * 
 * @param pos: ponteiro que caminhara pelo range para copiar os elementos
 */
 /*
 95% faltou o @return na documentação
 */
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{

    for(InputIt pos=first; pos!=last; pos++){
        *d_first = *pos;
        d_first++;
    }

    return d_first;
}

}
#endif
