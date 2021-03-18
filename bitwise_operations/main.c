//
//  main.c
//  bitwise_operations
//
//  Created by duhaochi on 3/18/21.
//

#include <stdio.h>
void onoffv1(void);
void onoffv2(void);
void onoffv3(void);
int main(int argc, const char * argv[]) {
    // insert code here...
    //onoffv1();
    //onoffv2();
    onoffv3();
    return 0;
}

//practical uses of bitwise operation

void onoffv1(){
  
    /*notice bellow we are using 8 bytes of memory for just a boolean value. which only takes up 1 bit. lets say we now have n switches we would need n * 4 byte space to store all of them! what a waste of space*/
    int x, y;
    x = 1;
    y = 1;
    //---------------

    if (x == 1){
        printf("1st feeature is enabled\n");
    }
    
    if (y == 1){
        printf("2nd feature is enabled\n");
    }
}

void onoffv2(){
    
    /*
     now lets try a different approche using bit shifting, imagan if we have a 32bit = 4 byte
     long usigned integer
     ------------------------------------
     00000000 00000000 00000000 00000000 |
     ------------------------------------
     since on and off only takes 1 bit each(that can represent on and off), now we can use
     a 4 byte intger to represent 32 individial switches!
     */
    
    //flags is a size 4byte (unsigned) integer
    unsigned int flags;
    //turn first switch on
    flags = 1; // 00000001
    //turn second on
    flags = 2; // 00000010
    //thrid....
    flags = 4; // 00000100
    //all
    //flags = 7; // 00000111
    
    if ((flags & 1) != 0){
        printf("1st feeature is enabled\n");
    }
    
    if ((flags & 2) != 0){
        printf("2nd feature is enabled\n");
    }
    if ((flags & 4) != 0){
        printf("3nd feature is enabled\n");
    }
    if ((flags & 7) == 7){
        printf("all features are enabled\n");
    }
    // now you might notice that it is very confusing to set the switches on and off, do we
    // have to do some kind of math otheration in our head evertime we switch something on?
    // what if we want to switch the 32 one on?
    
}


void onoffv3(){
    
    //now instead of setting on and off using decimal numbers we are gonna use binaray representations
    
    //flags is a size 4byte (unsigned) integer
    unsigned int flags;
    //turn first switch on
    flags = 0b1; // 00000001
    //turn second on
    flags = 0b10; // 00000010
    //thrid....
    flags = 0b100; // 00000100
    //all
    //flags = 0b111; // 00000111
    
    if ((flags & 0b1) != 0){
        printf("1st feeature is enabled\n");
    }
    
    if ((flags & 0b01) != 0){
        printf("2nd feature is enabled\n");
    }
    if ((flags & 0b001) != 0){
        printf("3nd feature is enabled\n");
    }
    if ((flags & 7) == 7){
        printf("all features are enabled\n");
    }
    
}
