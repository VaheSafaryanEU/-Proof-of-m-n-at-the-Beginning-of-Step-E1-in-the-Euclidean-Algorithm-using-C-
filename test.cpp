#include <iostream>

int gcd(int m, int n) {
    if (m < n) {
        int temp = m;
        m = n;
        n = temp;
    }

    std::cout << "Step E0: m = " << m << ", n = " << n << std::endl;
    while (n != 0) {
        std::cout << "Step E1: m = " << m << ", n = " << n << std::endl;

        int r = m % n;

        m = n;
        n = r;
    }
    std::cout << "GCD is " << m << std::endl;
    return m;
}

int main() {
    int m, n;
    std::cout << "Enter two integers: ";
    std::cin >> m >> n;
    gcd(m, n);
    return 0;
}

