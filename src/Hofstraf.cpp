int gNaive (int n) {
    if (n == 0) {
        return 0;
    } else {
        return n - gNaive(gNaive(n - 1));
    }
}
