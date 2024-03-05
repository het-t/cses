#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    unsigned long int n;

    (void)scanf("%lu", &n);
    printf("%lu ", n);

    while(n != 1) {
        if (n%2 == 0) n /= 2;
        else n = 3*n + 1;
        printf("%lu ", n);
    }


    return 0;
}