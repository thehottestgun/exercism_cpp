#include "two_fer.h"

namespace two_fer
{
    std::string two_fer(std::string input)
    {
        return "One for " + input + ", one for me.";
    }
} // namespace two_fer

int main()
{
    two_fer::two_fer();
}