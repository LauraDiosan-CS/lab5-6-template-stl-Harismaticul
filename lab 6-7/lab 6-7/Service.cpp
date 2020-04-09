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

//Desc: adauga un obiect
//In: id-ul , numele,ingredientele si pretul prajiturii
//Out: -
void Service::addElem(int id,char* nume,char* ingrediente,double pret)
{
    
    Prajitura p(id,nume,ingrediente,pret);
    this->r.createProdus(p);
}

//Desc: sterge un obiect dupa id
//In: id
//Out: -
void Service::deleteElem(int id)
{
    this->r.deleteProdus(id);
}

//Descr:    acceseaza un element din vector
//In:        pozitia
//Out:        elementul din vector de pe pozitia curenta
Prajitura Service::getPoz(int poz)
{
    return this->r.getPoz(poz);
}

//Descr:    acceseaza lungimea vectorului
//In:
//Out:        lungimea vectorului
int Service::getSize()
{
    return this->r.getSize();
}
