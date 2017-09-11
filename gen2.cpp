#include "testlib.h"
#include <iostream>

using namespace std;

void print(int n, int maxi) {
    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << rnd.next(maxi);
    }
    cout << endl;
}

int main(int argc, char* argv[]) {

    registerGen(argc, argv, 1);

    int n = atoi(argv[1]);
    int maxi = atoi(argv[2]);

    print(n, maxi);

    return 0;
}
