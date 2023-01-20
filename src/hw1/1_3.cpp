#include <iostream>
#include <stdio.h>

int cycle(int m) {
    auto elements = 1; // elements is the number of elements in the sequence starting at m
                       // end ending when m == 0
    std::cout << "M Before Loop: " << m << std::endl;
    std::cout << "Elements including m: " << elements << std::endl;
    while (m != 1)
    {
        if (m % 2 != 0)
        {
            m = 3 * m + 1;
        }
        else
        {
            m /= 2;
        }
        elements++;
        std::cout << "Elements++: " << elements << ", M: " << m << std::endl;
    }
    return elements;
}

int ThreeN(int m, int n) { // this code should call cycle
    int max = 0;
    for (int i = m; i <= n; i++)
    {
        if (cycle(i) > max)
        {
            max = cycle(i);
            std::cout << "MAX INT: " << i << std::endl;
        }
    }
    return max;
}

int main() {
    auto m = 0, n = 0, max = 0, temp = 0;
    auto mOriginal = 0, nOriginal = 0;
    auto i = 0;

    std::cin >> m;
    std::cin >> n;

    /* remember original order of entries for output */
    mOriginal = m;
    nOriginal = n;

    if (m > n)
    {
        temp = m;
        m = n;
        n = temp;
    }
    max = ThreeN(m, n);

    printf("%d %d %d\n", mOriginal, nOriginal, max);
    return 0;
}