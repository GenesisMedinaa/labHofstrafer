using namespace std;
#include <iostream>
#include <vector>

//Basic Case of Sequence
int gNaive (int n) {
    if (n == 0) {
        return 0;
    } else {
        return n - gNaive(gNaive(n - 1));
    }
}

//Improved version of Sequence
int improvHof(int j, std::vector<int>& memo) {
    if (j == 0) {
        return 0;
    }
    if (memo[j] != -1) {
        return memo[j];
    }
    memo[j] = j - improvHof(improvHof(j - 1, memo), memo);
    return memo[j];
}
