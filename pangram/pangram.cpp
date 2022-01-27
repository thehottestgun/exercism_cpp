#include "pangram.h"
using ui = unsigned int;
namespace pangram
{
    bool is_pangram(std::string input)
    {
        int index;
        std::vector<bool> check{26,false};
        for(ui i = 0; i < input.length();i++)
        {
            if('A'<=input[i] && input[i]<='Z') index = input[i]-'A';
            else if('a'<=input[i]&&input[i]<='z')index = input[i]-'a';
            else continue;
            check[index] = true;
        }
        for(bool const &b : check)
        if(b==false) return false;
        return true;

    }
} // namespace pangram
