//
//  main.c
//  bitwise_operations
//
//  Created by duhaochi on 3/18/21.
//

#include <stdio.h>
void onoff(void);

int main(int argc, const char * argv[]) {
    // insert code here...
    onoff();
    return 0;
}

//practical uses of bitwise operation

void onoff(){
    
    unsigned int flags;
    flags = 1;
    
    
    
    //notice bellow we are using 8 bytes of memory for just a boolean value. which only takes up 1 bit. lets say we now have n switches we would need n * 4 byte space to store all of them! what a waste of space
    int x, y;
    x = 1;
    y = 1;
    //---------------
    
    
    if ((flags & 1) != 0){
        printf("1st feeature is enabled\n");
    }
    
    if ((flags & 2) != 0){
        printf("2nd feature is enabled\n");
    }
}
