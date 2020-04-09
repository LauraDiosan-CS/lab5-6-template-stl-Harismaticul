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
    void addElem(int id,char* nume,char* ingrediente,double pret);
//    void updateElem(int id1,int id2,char* nume,char* ingrediente,double pret);
    void deleteElem(int id);
    Prajitura getPoz(int poz);
    int getSize();
};


#endif /* Service_h */
