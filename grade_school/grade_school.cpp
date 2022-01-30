#include "grade_school.h"
#include <iostream>
using namespace std;
namespace grade_school
{
    map<int,vector<string>> school::roster() const
    {
        return school_roster;
    }

    vector<string> school::grade(int grade) const
    {
        vector<string> grade_students;
        try
        {
            grade_students = school_roster.at(grade);
        }
        catch (out_of_range const&)
        {
        }

        return grade_students;
    }

    void school::add(string name, int class_number)
    {
        try
        {
            school_roster.at(class_number).push_back(name);
            sort(school_roster.at(class_number).begin(), school_roster.at(class_number).end());
        }
        catch (out_of_range const&)
        {
            vector<string> students{name};
            school_roster.insert(pair<int, vector<string>>(class_number, students));
        }
    }

} // namespace grade_school

int main()
{
    const grade_school::school school_{};
    cout << school_.roster().empty();
}