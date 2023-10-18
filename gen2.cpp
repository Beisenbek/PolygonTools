#include "testlib.h"
#include <iostream>

using namespace std;

void print(int n, int maxi) {
    cout << n << endl;
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << rnd.next(maxi);
    }
    cout << endl;
}

int main(int argc, char* argv[]) {

    registerGen(argc, argv, 1);

    int n = rnd.next(atoi(argv[1]));
    int maxi = atoi(argv[2]);

    print(n, maxi);

    return 0;
}
