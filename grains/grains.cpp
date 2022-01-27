#include "grains.h"
#include <iostream>
#include <math.h>
namespace grains
{
    unsigned long long int square(int sq)
    {
        return pow(2, sq - 1);
    }

    unsigned long long int total()
    {
        unsigned long long int total{0};

        for (int i = 0; i < 64; i++)
        {
            total += (unsigned long long int)pow(2, i);
        }
        return total;
    }
} // namespace grains

int main()
{
    std::cout << grains::total();
}