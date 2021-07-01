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
 * @param InputIt: interador do range
 * @param pos: ponteiro que caminhara pelo range para realizar as verificações
 */

/*
90% a documentação ficou incompleta
*/
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    if(first == last){
        return false;
    }
    for(InputIt pos = first; pos != last; pos++)
    {
        if (p(*pos))
        {
            return true;
        }
    return false;
    }
    
}

/*! 
 * @tparam InputIt: interador do range
 * @tparam Compara se o tipo de função bool p(const string &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * 
 * @param pos: ponteiro que caminhara pelo range para realizar as verificações
 */

template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    for(InputIt pos = first; pos != last; pos++)
    {
        if(p(*pos))
        {
            return true;
        }
    }
    return false;
}

/*! 
 * TODO: documentação no estilo doxygen
 * @param InputIt: interador do range
 * @param pos: ponteiro que caminhara pelo range para realizar as verificações
 */

template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
    for(InputIt pos = first; pos != last; pos++)
    {
        if(p(*pos))
        {
            return false;
        }
    }
    return true;
}

}
#endif
