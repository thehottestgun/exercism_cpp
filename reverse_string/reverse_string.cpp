#include "reverse_string.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
namespace reverse_string
{

    std::string reverse_string(std::string word)
    {
        //a simple solution

        //std::reverse(word.begin(),word.end());
        //return word;

        //a big brain solution
        int len = word.length();
        int n = len - 1;
        int i = 0;
        while (i <= n)
        {
            //Using the swap method to switch values at each index
            swap(word[i], word[n]);
            n = n - 1;
            i = i + 1;
        }
        return word;
    }

} // namespace reverse_string

int main()
{
    std::string test = "cba";
    std::cout << test.compare(reverse_string::reverse_string("abc"));
}