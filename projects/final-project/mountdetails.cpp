#include "mountdetails.h"
#include <iostream>


//beginning of setters
void MountDetails::SetName(string name) //setter
{
    MTname = name;
}

void MountDetails::SetCountry(string country) //setter
{
    MTcountry = country;
}

void MountDetails::SetElevation(int elevation) //setter
{
    MTelevation = elevation;
}


//beginning of getters
string MountDetails::GetName() const //getter
{
    return MTname;
}

string MountDetails::GetCountry() const //getter
{
    return MTcountry;
}

int MountDetails::GetElevation() const //getter
{
    return MTelevation;
}


//feet to meters
double MountDetails::toMeters(int elevation)
{
    return (elevation/3.2808);
}