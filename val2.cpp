#include "testlib.h"
 
using namespace std;
 
int main(int argc, char* argv[])
{
    registerValidation(argc, argv);
    
    int n = inf.readInt(1, 10'000, "n");
    inf.readEoln();
    for (int i = 0; i < n; i++){
        inf.readInt(0, 10'000, "v");
        if(i < n-1) inf.readSpace();
        else inf.readEoln();
    }
    inf.readEof();
    return 0;
}
