using namespace std;
#include <iostream>
#include <cmath>

int gNaive(int n);

int main(){
    
    for (int n = 0; n <= 10; n++) {
        cout << "gNaive(" << n << ") = " << gNaive(n) << endl;
    }
    return 0;
}
