#include <stdio.h>

unsigned char ModifyBit(unsigned char dest_data, unsigned char bit_num, char value) {
    unsigned mask;

    mask=0x01<<bit_num;
    if(bit_num<8) {
        if(value==1) dest_data=( dest_data | mask );
        else dest_data=( dest_data & ~mask );
    }
    return dest_data;
}

main() {
    unsigned char lamp_state=0x7F;
    printf("%X->", lamp_state);

    lamp_state=ModifyBit(lamp_state, 3, 0);
    printf("%X->", lamp_state);

    lamp_state=ModifyBit(lamp_state, 3, 1);
    printf("%X \n", lamp_state);
}