//
//  produs.h
//  lab 6-7
//
//  Created by Haris Muller Cristea on 01/04/2020.
//  Copyright © 2020 Cristea Muller Haris. All rights reserved.
//

#ifndef prajitura_h
#define prajitura_h

#include<ostream>
using namespace std;

class Prajitura
{
private:
    int id;
    char* nume;
    char* ingrediente;
    float pret;
public:
    Prajitura();
    Prajitura(int id, char* nume, char* ingrediente, double pret);
    Prajitura(const Prajitura& p);
    ~Prajitura();
    int getID();
    char* getnume();
    char* getingrediente();
    float getpret();
    void setID(int cod);
    void setnume(char* nume);
    void setingrediente(char* ingrediente);
    void setpret(double pret);
    bool operator ==(const Prajitura& p);
    friend ostream& operator <<(ostream& os, const Prajitura& p);
};


#endif /* produs_h */
