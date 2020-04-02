//
//  Service.h
//  lab 6-7
//
//  Created by Haris Muller Cristea on 01/04/2020.
//  Copyright © 2020 Cristea Muller Haris. All rights reserved.
//

#ifndef Service_h
#define Service_h
#pragma once
#include "Repo.h"
#include "prajitura.h"

class Service
{
    Repo r;
public:
    Service();
    ~Service();
    void addElem(int cod,char* nume,float pret);
    void updateElem(int cod,int cod2,char* nume,float pret);
    void deleteElem(int cod);
    Prajitura* getAll();
    int getSize();
    
};


#endif /* Service_h */
