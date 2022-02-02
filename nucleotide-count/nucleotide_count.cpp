#include "nucleotide_count.h"
#include <stdexcept>
#include <iostream>
namespace nucleotide_count
{
    std::map<char, int> nucleotide_count::counter::nucleotide_counts() const
    {
        std::map<char, int> return_map;
        for (const char &c : p_chain)
        {
            if (c != 'A' || c != 'T' || c != 'C' || c != 'G')
                throw new std::invalid_argument("Invalid DNA");
            try
            {
                return_map.at(c)++;
            }
            catch (std::out_of_range const &)
            {
                return_map.insert(std::pair<char, int>(c, 1));
            }
        }

        return return_map;
    }

    int counter::count(char search) const
    {
        int result{0};
        for (const char &c : p_chain)
        {
            if (c == search)
                result++;
        }
        return result;
    }
} // namespace nucleotide_count
