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
 * @tparam BidirIt iterator para o range.
 * @tparam std::iter_swap(const T &a, const T &b) troca os valores entre os ponteiros
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * 
 * @param i caminhara pelo range para determinar o tamanho
 * @param t determina se o range terá um numero par ou impar a serem trocados
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
