//
//  RepoFile.h
//  Lab 7
//
//  Created by Haris Muller Cristea on 22/04/2020.
//  Copyright © 2020 Cristea Muller Haris. All rights reserved.
//


#define RepoFile_h
#pragma once
#include <iostream>
#include "prajitura.h"
#include "Repo.h"

template <class T>
class RepoF : public Repo <T>
{
private:
    vector<T> elements;
    char* fileName;
public:
    RepoF();
    RepoF(const char* fileName);
//    RepoF(const RepoFile& r);
    ~RepoF();
    void setFileName(const char* fileName);
    void loadFromFile();
    void updateElement(int id,T newElement);
    void deleteElement(int id);
    T getElement(int id);
    void addElement(T s);
    int getSize();
    vector <T> getAll();
};


//operator de egalitate
// constructor fara param.,construcotr de copiere,operator =,destructor

