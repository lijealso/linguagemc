#include <stdio.h>

main(){
    /* error: no ; after first ) - no function before second ( */
    printf("Hello")("World");
}