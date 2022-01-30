#include "hamming.h"
#include <iostream>
namespace hamming
{
    int compute(const std::string& first, const std::string& second)
    {
        if (first.length() != second.length())
            throw new std::domain_error("Length Mismatch");
        int hamming{0};
        for (size_t i = 0; i < first.length(); i++)
        {
            if (first[i] != second[i])
                hamming += 1;
        }
        return hamming;
    }
} // namespace hamming

int main()
{
    std::cout << hamming::compute("GATACA", "GCATAA");
}