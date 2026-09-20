using namespace std;
#include <iostream>
#include <cmath>

#include "Hofstraf.hpp"

int main(){
     
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Result for " << n << " is: " << gNaive(n) << endl;
    return 0;
}
