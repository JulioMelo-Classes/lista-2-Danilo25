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
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */


template <typename Itr, typename Compare >
std::pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp )
{
    Itr min=first,
        max=first;

    int minc=*first,
        maxc=0,
        c=0;

    for(Itr pos1 = first; pos1 != last; pos1++){
        for(Itr pos2 = first; pos2 != last; pos2++){
            if(pos1 != pos2){
                if(cmp(*pos2,*pos1)){
                    c++;
                }
            }
            if(pos1 == first){
                minc = c;
            }   
        }
        if(c < minc){
            minc = c;
            min = pos1;
        }
        if(c >= maxc){
            maxc = c;
            max = pos1;
        }
        c=0;
    }
    return std::make_pair( min, max );
}

}
#endif
