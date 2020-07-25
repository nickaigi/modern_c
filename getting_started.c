/* What is 'size_t' data type in C ?
 * It is an unsigned (never negative) integral data type
 *  - if the compiler is 32bit: it is a typedef for 'unsigned int'
 *  - if the compiler is 64bit: its a typedef for 'unsigned long long int'
 *
 *  In ubuntu 18.04:
 *      echo | gcc -E -xc -include 'stddef.h' - | grep size_t
 *  Returns:
 *      typedef long unsigned int size_t;
 *
 */

#include<stdlib.h>
#include<stdio.h>

int main(){
    double A[5] = {
        [0] = 9.0,
        [1] = 2.9,
        [4] = 3.E+25,
        [3] = .00007,
    };

    for (size_t i = 0; i < 5; ++i) {
        printf("element %zu is %g, \tits square is %g\n",
                i,
                A[i],
                A[i] * A[i]);
    }

    return EXIT_SUCCESS;
}
