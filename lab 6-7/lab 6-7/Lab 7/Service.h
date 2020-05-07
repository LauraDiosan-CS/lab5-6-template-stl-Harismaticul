//
//  Service.h
//  lab 6-7
//
//  Created by Haris Muller Cristea on 01/04/2020.
//  Copyright © 2020 Cristea Muller Haris. All rights reserved.
//


#pragma once
#include "Repo.h"
#include "prajitura.h"
#include "RepoFile.h"
#include <string>

class Service
{
    RepoF<Prajitura> r;
public:
    Service();
    Service(RepoF<Prajitura>& r);
    ~Service();
    void setRepo(RepoF<Prajitura>& r);
    void addElem(int id,char* nume,char* ingrediente,double pret);
    void updateElem(int id1,int id2,char* nume,char* ingrediente,double pret);
    void deleteElem(int id);
    Prajitura getPoz(int id);
    vector<Prajitura> getAll();
    int getSize();
};


