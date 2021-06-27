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
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
    InputIt2 pos2=first2;
    for(InputIt1 pos1=first1; pos1!=last1-1; pos1++){
        if(*pos1 != *pos2){
            return false;
        }
        pos2++;
    }
    return true;
}

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
    InputIt2 pos2=first2;
    for(InputIt1 pos1=first1; pos1!=last1-1; pos1++){
        if(*pos1 != *pos2){
            return false;
        }
        pos2++;
    }
    return true;
}

}
#endif
