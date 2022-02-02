#include "difference_of_squares.h"
#include <iostream>
namespace difference_of_squares
{
    int square_of_sum(int n)
    {
        int current{1};
        int sum{0};
        while (current < n + 1)
        {
            sum += current;
            current++;
        }
        return pow((double)sum, 2.0);
    }
    int sum_of_squares(int n)
    {
        int current{1};
        int sum{0};
        while (current < n + 1)
        {
            sum += pow((double)current, 2.0);
            current++;
        }
        return sum;
    }
    int difference(int n)
    {
        double operational{(double)n};
        double first{operational/12};
        double second{pow(operational,2.0) -1};
        double third{3*operational+2};
        return first*second*third;
    }
} // namespace difference_of_squares
