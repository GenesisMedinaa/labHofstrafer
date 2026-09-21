using namespace std;
#include <iostream>
#include <cmath>
#include <array>
#include <vector>

int gNaive(int n);
int improvHof(int j, vector<int>& memo);

int main() {
    
    //Basic Case of Sequence
    cout << "Basic Case of Sequence" << endl;
    for (int n = 0; n <= 10; n++) {
        cout << "gNaive(" << n << ") = " << gNaive(n) << endl;
    }

    //Improved version of Sequence
    cout << " Improved version of Sequence" << endl;
    for (int j = 0; j <= 10; j++) {
        vector<int> memo(j + 1, -1);
        cout << "improvHof(" << j << ") = " << improvHof(j, memo) << endl;
    }
    return 0;
}
