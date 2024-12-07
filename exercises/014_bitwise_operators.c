#include <stdio.h>

int main(void)
{
    // At long last, after this exercise we're finally done with operators!
    // But these are indeed special and relate heavily to high-performance
    // and embedded uses C is famous for, so listen closely!
    //
    // & | ^ << >> ~ 

    short bit_pattern = 0xFF;  // aka binary 1111 1111, aka decimal 15
    int result = 0x00;         // aka binary 0000 0000, aka decimal 0
    printf("bit_pattern AND 0x0A: %x\n", bit_pattern __ 0x0A); // aka 0000 1010
    printf("bit_pattern OR 0x0A: %x\n", bit_pattern __ 0x0A);    
    printf("bit_pattern XOR 0x0A: %x\n", bit_pattern __ 0x0A);    
    printf("bit_pattern shifted left by 2: %x\n", bit_pattern __ 2);   
    printf("bit_pattern shifted right by 1: %x\n", bit_pattern __ 1);    
    printf("bit_pattern AND (NOT 0x0A): %x\n", bit_pattern __ _0x0A);    

    return 0;
}
