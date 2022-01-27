#if !defined(TRIANGLE_H)
#define TRIANGLE_H
#include <stdexcept>
namespace triangle
{

    enum class flavor
    {
        equilateral,
        isosceles,
        scalene
    };

    bool is_valid(double a, double b, double c)
    {
        return (a + b > c) && (b + c > a) && (c + a > b) && b > 0 && c > 0 && a > 0;
    }

    flavor kind(double a, double b, double c)
    {
        if (!is_valid(a, b, c))
            throw std::domain_error("Triangle invalid.");
        if (a == b && b == c)
        {
            return flavor::equilateral;
        }
        else if (a == b || b == c || a == c)
        {
            return flavor::isosceles;
        }
        else
            return flavor::scalene;
    }
} // namespace triangle

#endif // TRIANGLE_H