#include "collatz_conjecture.h"
#include <stdexcept>
#include <iostream>
namespace collatz_conjecture
{
    int steps(long int input)
    {
        if(input <= 0) throw new std::domain_error("XD nice try");
        long int result{input};
        int steps{0};
        while(result != 1)
        {
            if(result%2==0)result/=2;
            else result = (result*3)+1;
            steps++;
        }
        return steps;
    }

} // namespace collatz_conjecture

int main()
{
    std::cout << (collatz_conjecture::steps(-15)) << std::endl;
}