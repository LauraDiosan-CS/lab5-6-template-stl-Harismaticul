//
//  Repo.h
//  lab 6-7
//
//  Created by Haris Muller Cristea on 01/04/2020.
//  Copyright © 2020 Cristea Muller Haris. All rights reserved.
//

#ifndef Repo_h
#define Repo_h
#pragma once
using namespace std;
#include "prajitura.h"
#include "Vector.h"

class Repo
{
private:
    Vector<Prajitura> prajituri;
public:
    Repo();
    ~Repo();
    void createProdus(Prajitura p);
    void deleteProdus(int id);
    void updateProdus(int id,Prajitura p);
    Prajitura getPoz(int poz);
    int getSize();
};


#endif /* Repo_h */
