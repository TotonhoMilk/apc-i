#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    // unsigned char      -> 0 a 255
    // unsigned int       -> 0 a 4 bilhões
    // short int          -> -32 mil a 32 mil
    // unsigned short int -> 0 a 65 mil
    // long int           -> -nomilhão a nomilhão
    // unsigned long int  -> 0 a 18lhão

    // long double        -> número gigante!

    // DEUSO SALVE A AMÉRICA!!

    printf("O tipo 'unsigned char'      ocupa %2i byte(s)\n",      sizeof(unsigned char));
    printf("O tipo 'unsigned int'       ocupa %2i byte(s)\n",       sizeof(unsigned int));
    printf("O tipo 'short int'          ocupa %2i byte(s)\n",          sizeof(short int));
    printf("O tipo 'unsigned short int' ocupa %2i byte(s)\n", sizeof(unsigned short int));
    printf("O tipo 'long int'           ocupa %2i byte(s)\n",           sizeof(long int));
    printf("O tipo 'unsigned long int'  ocupa %2i byte(s)\n",  sizeof(unsigned long int));
    printf("O tipo 'long double'        ocupa %2i byte(s)\n\n",      sizeof(long double));

    printf("O tipo 'unsigned char'      aceita valor de %i a %i\n",  0, UCHAR_MAX);
    printf("O tipo 'unsigned int'       aceita valor de %i a %u\n",  0,  UINT_MAX);
    printf("O tipo 'short int'          aceita valor de %i a %i\n",  SHRT_MIN, SHRT_MAX);
    printf("O tipo 'unsigned short int' aceita valor de %i a %u\n",  0, USHRT_MAX);
    printf("O tipo 'long int'           aceita valor de %Li a %Li\n",  LONG_MIN, LONG_MAX);
    printf("O tipo 'unsigned long int'  aceita valor de %i a %u\n",  0, ULONG_MAX);
    printf("O tipo 'long double'        aceita valor de %LE a %LE\n",  LDBL_MIN, LDBL_MAX);
    L

    return 0;
}