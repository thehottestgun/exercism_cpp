#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
namespace grade_school
{
    class school
    {
    private:
        map<int, vector<string>> school_roster;

    public:
        school(){};
        map<int,vector<string>> roster() const;
        vector<string> grade(int) const;
        void add(string, int);
    };
} // namespace grade_school

#endif // GRADE_SCHOOL_H