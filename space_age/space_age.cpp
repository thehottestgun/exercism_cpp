#include "space_age.h"
#include <iostream>
namespace space_age
{
    space_age::space_age(unsigned long long int seconds) : private_seconds(seconds) {}

    unsigned long long int space_age::seconds() const
    {
        return private_seconds;
    }
    double space_age::on_earth() const
    {
        return private_seconds / 31557600.0;
    }
    double space_age::scale_earth_years(double earth_years) const
    {
        return on_earth() / earth_years;
    }
    double space_age::on_mercury() const
    {
        return scale_earth_years(0.2408467);
    }
    double space_age::on_venus() const
    {
        return scale_earth_years(0.61519726);
    }
    double space_age::on_mars() const
    {
        return scale_earth_years(1.8808158);
    }
    double space_age::on_jupiter() const
    {
        return scale_earth_years(11.862615);
    }
    double space_age::on_saturn() const
    {
        return scale_earth_years(29.447498);
    }
    double space_age::on_uranus() const
    {
        return scale_earth_years(84.016846);
    }
    double space_age::on_neptune() const
    {
        return scale_earth_years(164.79132);
    }

} // namespace space_age
