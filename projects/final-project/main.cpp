/*
File: main.cpp
Description: This is a program to print out the lowest elevation of 7 different mountains in different countries
Created: Friday, June 9 2023, @ 2:20 PM
Author: Moses Avila
mail: mosesa4035@student.vvc.edu
*/

#ifndef FOO_H
#define FOO_H
#include <iostream>
#include <string>
#include <vector>
#include "mountdetails.h"

using namespace std;

int minElevation(vector<MountDetails> mountain)
{
    int index = 0; 
        for(int i = 0; i < mountain.size(); i++)
        {
            if(mountain[i].GetElevation() < mountain[index].GetElevation())
            {
                index = i;
            }
        }
    return index;
}

int main() {

    vector<MountDetails> mountain;

    MountDetails mt1; //mountain 1
    mt1.SetName("Everest");
    mt1.SetCountry("Nepal");
    mt1.SetElevation(29029);
    mountain.push_back(mt1);

    MountDetails mt2; //mountain 2
    mt2.SetName("Chimborazo");
    mt2.SetCountry("Ecuador");
    mt2.SetElevation(20549);
    mountain.push_back(mt2);

    MountDetails mt3; //mountain 3
    mt3.SetName("Matterhorn"); 
    mt3.SetCountry("Switzerland");
    mt3.SetElevation(14692);
    mountain.push_back(mt3);

    MountDetails mt4; //mountain 4
    mt4.SetName("Zugspitze");
    mt4.SetCountry("Switzerland");
    mt4.SetElevation(9719);
    mountain.push_back(mt4);

    MountDetails mt5; //mountain 5
    mt5.SetName("Olympus");
    mt5.SetCountry("Greece (Macedonia)");
    mt5.SetElevation(9573);
    mountain.push_back(mt5);

    MountDetails mt6; //mountain 6
    mt6.SetName("Mount Mitchell - Blue Ridge");
    mt6.SetCountry("United States");
    mt6.SetElevation(6684);
    mountain.push_back(mt6);

    MountDetails mt7; //mountain 7
    mt7.SetName("Mount Marcy - Adirondacks");
    mt7.SetCountry("United States");
    mt7.SetElevation(5344);
    mountain.push_back(mt7);

        for(int i = 0; i < mountain.size(); i++)
        {
            cout << mountain[i].GetName() << ", " << mountain[i].GetCountry() << " " // gets all the name and countries
                 << mountain[i].GetElevation() << "ft " << mountain[i].toMeters(mountain[i].GetElevation()) << "m " // prints out elevation in ft and meters of all mts 
                 << endl;
        }

            cout << "Lowest Elevation: " //Prints out name of the shortest elevation
                 << mountain[minElevation(mountain)].GetName() << ", " << mountain[minElevation(mountain)].GetCountry() << " " // gets name and country of lowest elevation mt
                 << mountain[minElevation(mountain)].GetElevation() << "ft " << mountain[minElevation(mountain)].toMeters(mountain[minElevation(mountain)].GetElevation()) << "m " // ft and meters of lowest elevation mt
                 << endl;

    return 0;

}
#endif