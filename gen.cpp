/*
 * Outputs random 100-digits binary string mostly containing 0's. 
 * In average it contrains only 10% of 1's.
 *
 * To generate different values, call "bgen.exe" with different parameters.
 * 
 * It is typical behaviour of testlib generator to setup randseed by command line.
 */

#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);

    int n = atoi(argv[1]);

    while (n--) {
        printf("%c", char('a' + rnd.next(26)));
    }
    printf("\n");

    return 0;
}
