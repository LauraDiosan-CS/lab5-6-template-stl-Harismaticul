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

Service::Service(RepoF<Prajitura> &r)
{
    this->r = r;
}

Service::~Service()
{
    
}

void Service::setRepo(RepoF<Prajitura> &r)
{
    this->r=r;
}


//Desc: adauga un obiect
//In: id-ul , numele,ingredientele si pretul prajiturii
//Out: -
void Service::addElem(int id,char* nume,char* ingrediente,double pret)
{
    
    Prajitura p(id,nume,ingrediente,pret);
    this->r.addElement(p);
}

//Desc: sterge un obiect dupa id
//In: id
//Out: -
void Service::deleteElem(int id)
{
    this->r.deleteElement(id);
}

//Desc: modifica obiectul de pe o pozitie
//In: id-ul obiectului modificat,noul id,noul nume,noile ingrediente,noul pret
//Out: -
void Service::updateElem(int id1, int id2, char* nume, char* ingrediente, double pret)
{
    Prajitura p(id2,nume,ingrediente,pret);
    this->r.updateElement(id1,p);
}

//Descr:    acceseaza un element din vector
//In:        pozitia
//Out:        elementul din vector de pe pozitia curenta
Prajitura Service::getPoz(int id)
{
    return this->r.getElement(id);
}

//Descr:    acceseaza lungimea vectorului
//In:
//Out:        lungimea vectorului
int Service::getSize()
{
    return this->r.getSize();
}

//Descr:    acceseaza elementele vectorului
//In:
//Out:      toate elementele vectorului
vector<Prajitura> Service::getAll()
{
    return this->r.getAll();
}


