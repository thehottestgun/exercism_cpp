#include "nth_prime.h"

namespace nth_prime
{
    int nth(int n)
    {
        if (n == 0)
            throw new std::domain_error("");
        int current{1};
        int testing{1};
        int prime{0};
        do
        {
            if (is_prime(testing))
            {
                current++;
                prime = testing;
            }
            testing++;
        } while (current <= n);
        return prime;
    }
    bool is_prime(int n)
    {
        if(n<=1) return false;
        if(n<=3) return true;

        if(n%2==0||n%3==0) return false;

        for (int i = 5; i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }
} // namespace nth_prime

int main()
{
    std::cout << (2 == nth_prime::nth(1)) << std::endl;
    std::cout << (3 == nth_prime::nth(2)) << std::endl;
    std::cout << (13 == nth_prime::nth(6)) << std::endl;
    std::cout << (nth_prime::nth(10001)) << std::endl;
}