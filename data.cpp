//Created by Eva Wu on 11/7/19.
#include <string>
#include <iostream>
#include "data.h"

using namespace std;

//default constructor
data::data() {
    Num  = 0;
    Name = "";
    Hp = 0.0;
    Attack = 0.0;
    Defence = 0.0;
    Spatk = 0.0;
    Spdef =0.0;
    Speed =0.0;
}
//alternate constructor
data::data(int n,string name, double hp, double atk, double def, double spatk, double spdef, double sp) {
    Num  = n;
    Name = name;
    Hp = hp;
    Attack = atk;
    Defence = def;
    Spatk = spatk;
    Spdef = spdef;
    Speed = sp;

}

//overloads the outstream operator
ostream& operator<<(ostream& os, const data& ptr) {
    os << ptr.Num << ": " << ptr.Name << ", " << ptr.Hp << "," << ptr.Attack << ", "<< ptr.Defence << "," << ptr.Defence << "," << ptr.Spatk<< "," << ptr.Spdef << "," << ptr.Speed;
    return os;
}

//overloads <,>,= operator
bool data::operator<(data &hr) {
    if(this->Hp < hr.Hp){
    return true;}
    else{
        return false;
    }
}
bool data::operator>(data &hr) {
    if(this->Hp>hr.Hp){
        return true;
    }else{
        return false;
    }
}
bool data::operator >=(data &hr){
    if(this->Hp>=hr.Hp){
        return true;
    }else{
        return false;
    }
};

