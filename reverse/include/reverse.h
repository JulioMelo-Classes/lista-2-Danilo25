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
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    BidirIt i;
    int t=0;
    for(i=first;i!=last-1;i++){
        t++;
    }
    if(t%2!=0){
        for(BidirIt pos1=first, pos2=last-1; pos1!=pos2+1; pos1++, pos2--){
            std::iter_swap(pos1, pos2);
        }
    }else{
        for(BidirIt pos1=first, pos2=last-1; pos1!=pos2; pos1++, pos2--){
            std::iter_swap(pos1, pos2);
        }
    }
}
}
#endif
