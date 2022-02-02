#include "rna_transcription.h"
#include <iostream>
namespace rna_transcription
{
    std::string to_rna(std::string dna)
    {
        std::vector<char> rna_result;
        for (char const &c : dna)
        {
            if (c == 'G')
                rna_result.push_back('C');
            else if (c == 'C')
                rna_result.push_back('G');
            else if (c == 'T')
                rna_result.push_back('A');
            else if (c == 'A')
                rna_result.push_back('U');
        }
        return std::string(rna_result.begin(), rna_result.end());
    }
    char to_rna(char c)
    {
        if (c == 'G')
            return ('C');
        else if (c == 'C')
            return ('G');
        else if (c == 'T')
            return ('A');
        else if (c == 'A')
            return ('U');
        else
            return 'E';
    }
} // namespace rna_transcription

