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
 * @tparam ForwardIt iterator para o range.
 * @tparam std::iter_swap(const T &a, const T &b) troca os valores entre os ponteiros
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @param pos1 Ponteiro que guarda o primeiro valor a ser comparado
 * @param max Ponteiro que guarda o segundo valor a ser comparado
 *
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{

    int i=0;
    for(ForwardIt pos1=first;pos1!=last;pos1++){
        for(ForwardIt pos2=first;pos2!=last;pos2++){
            if(pos1 != pos2){
                if(cmp(*pos1,*pos2)){
                    std::iter_swap(pos1,pos2);
                }
            }
        }
    }
}

}
#endif
