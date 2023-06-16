
#include <stdio.h>
#include <stdlib.h>

/**
 * Given a nonnegative integer a and a positive integer d, the aim of the algorithm is to find integers q and r that
 * satisfy the conditions a = dq + r and 0 <= r < d. This is done by substracting d repeatedly from a until the result
 * is less than d but is still nonnegative.
 *
 *  0 <= a - d - d - d - ... - d = a - dq < d
 *
 * The total number of id's that are substracted is the quotient q. The quantity a - dq equals the reminder r.
 *
 * Input: a [a nonnegative integer], d [a positive integer]
 */

struct Result {
    int q;
    int r;
};

struct Result div2(int a, int d) {

    int r = a;
    int q = 0;

    while (r >= d) {
        r = r - d;
        q = q + 1;
    }

    struct Result res;

    res.q = q;
    res.r = r;

    return res;
}


int main() {
    struct Result result = div2(140, 10);
    printf("Result q = %d, r = %d\n", result.q, result.r);

    struct Result result2 = div2(221, 53);
    printf("Result q = %d, r = %d\n", result2.q, result2.r);
}