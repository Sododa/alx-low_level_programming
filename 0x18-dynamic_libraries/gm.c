#include <stdio.h>
#include "gm.h"

int main() {
    int a, b, c, d, e, f;
    for (int i = 0; i < 100; i++) {
        a = rand() % 50 + 1;
        b = rand() % 50 + 1;
        c = rand() % 50 + 1;
        d = rand() % 50 + 1;
        e = rand() % 10 + 1;
        f = rand() % 20 + 1;

        make_me_win(a, b, c, d, e, f);
    }

    return 0;
}
