#include <cstddef>
#include <iostream>
#include <array>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::array<std::size_t, 10> a;

    // Example with C++23 size_t literal
    for (auto i = 0; i != a.size(); ++i) {
        std::cout << (a[i] = i) << ' ';
    }
        
    std::cout << '\n';

    // Example of decrementing loop
    for (std::size_t i = a.size(); i--;) {
        std::cout << a[i] << ' ';
    }

    // Note the naive decrementing loop:
    //  for (std::size_t i = a.size() - 1; i >= 0; --i) ...
    // is an infinite loop, because unsigned numbers are always non-negative

    _getch();
    return 0;
}