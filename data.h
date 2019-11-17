//
// Created by Eva Wu on 11/7/19.
//

#ifndef PROJECT7_DATA_H
#define PROJECT7_DATA_H


#include <string>
#include <iostream>
using namespace std;

class data {
public:

    data ();
    data(int n,string name, double hp, double atk, double def, double spatk, double spdef, double sp);
    friend ostream& operator<<(ostream& os, const data& pr);
    bool operator >= (data& hr);
    bool operator < (data& hr);
    bool operator > (data& hr);

private:
    int Num;
    string Name;
    double Hp;
    double Attack;
    double Defence;
    double Spatk;
    double Spdef;
    double Speed;
};


#endif //PROJECT7_DATA_H
