//
//  bit_shifting.c
//  bitwise_operations
//
//  Created by duhaochi on 3/22/21.
//
#include <math.h>

#include "bit_shifting.h"

void print_binary(unsigned n)
{
    unsigned i;
    int counter = 0;
    for (i = 1 << 31; i > 0; i = i / 2){
        counter ++;
        
        (n & i) ? printf("1") : printf("0");
        
        if(counter % 8 == 0){
            printf(" ");
        }
    }
    printf("\n");
}

signed int Lshift_s(unsigned value, int by){
    signed int shifted = value;
    shifted = shifted << by;
    
    print_binary(shifted);
    
    return shifted;
}
signed int Rshift_s(unsigned value, int by){
    signed int shifted = value;
    shifted = shifted >> by;
    
    print_binary(shifted);
    
    return shifted;
}

signed int Rshift_u(unsigned value, int by){
    unsigned int shifted = value;
    shifted = shifted >> by;
    
    print_binary(shifted);
    
    return shifted;
}
