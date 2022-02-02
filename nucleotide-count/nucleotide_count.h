#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H
#include <string>
#include <map>
namespace nucleotide_count
{
    class counter
    {
    public:
        counter(std::string chain) { p_chain = chain; };
        std::map<char, int> nucleotide_counts() const;
        int count(char c) const;

    private:
        std::string p_chain;
    };
} // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H