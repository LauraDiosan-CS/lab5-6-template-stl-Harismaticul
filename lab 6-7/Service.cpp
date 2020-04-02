//
//  Service.cpp
//  lab 6-7
//
//  Created by Haris Muller Cristea on 01/04/2020.
//  Copyright © 2020 Cristea Muller Haris. All rights reserved.
//

#include <stdio.h>
#include "Service.h"


Service::Service()
{
    
}

Service::~Service()
{
    
}

void Service::addElem(int cod,char* nume,float pret)
{
    Produs p(cod,nume,pret);
    this->r.createProdus(p);
}

void Service::updateElem(int cod,int cod2,char* nume,float pret)
{
    Produs p(cod2,nume,pret);
    this->r.updateProdus(cod,p);
}

void Service::deleteElem(int cod)
{
    this->r.deleteProdus(cod);
}

Produs* Service::getAll()
{
    return this->r.getAll();
}

int Service::getSize()
{
    return this->r.getSize();
}
