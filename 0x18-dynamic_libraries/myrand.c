#include <stdlib.h>
#include <time.h>

int rand(void) {
    return 123456; // constant value to ensure the same set of numbers
}

int srand(unsigned int seed) {
    return 0; // do nothing to prevent the seed from being changed
}
