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
 * TODO: documentação no estilo doxygen
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
 * TODO: documentação no estilo doxygen
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
