#include "myassert.h"

int main(void) {
    myassert(1);
    myassert(1 + 2 == 3);
    myassert(.1 + .2 == .3); // should fail
    return 0;
}
