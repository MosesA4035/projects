#ifndef MOUNTDETAILS_H

#include<iostream>
#include<string>

using namespace std;

class MountDetails
{

    private:
        string MTname; //Member for the name, (make it private for java or c++)
        string MTcountry; //Member for the country, (make it private for java or c++)
        int MTelevation; //Member for the elevation, (make it private for java or c++)

    public:
        string GetName() const; //getter
        string GetCountry() const; //getter
        int GetElevation() const; //getter

        void SetName(string name); //setter
        void SetCountry(string country); //setter
        void SetElevation(int elevation); //setter

        double toMeters(int elevation); //A member function call toMeters

};
#endif
