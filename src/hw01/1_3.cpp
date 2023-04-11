#include <iostream>
#include <stdio.h>

int cycle(int m)
{
    int elements = 1; // elements is the number of elements in the sequence
                      // starting at m end ending when m == 0
    while (m != 1)
    {
        if (m % 2 == 0)
        {
            m /= 2;
        }
        else
        {
            m = 3 * m + 1;
        }
        elements++;
    }
    return elements;
}

int ThreeN(int m, int n)
{ // this code should call cycle
    int max = -1;
    int temp = 0;
    if (m > n)
    {
        temp = m;
        m = n;
        n = temp;
    }
    for (int i = m; i <= n; i++)
    {
        int currentMax = cycle(i);
        if (currentMax >= max)
        {
            max = currentMax;
        }
    }
    return max;
}

int main()
{
    int m = 0, n = 0, max = 0, temp = 0;
    int mOriginal = 0, nOriginal = 0;

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