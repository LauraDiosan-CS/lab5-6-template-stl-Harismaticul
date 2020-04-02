//
//  UI.h
//  lab 6-7
//
//  Created by Haris Muller Cristea on 01/04/2020.
//  Copyright © 2020 Cristea Muller Haris. All rights reserved.
//

#ifndef UI_h
#define UI_h
#pragma once


class UI
{
private:
    int optiune;
public:
    UI();
    UI(int optiune);
    ~UI();
    void accesareOptiune();
    void meniu();
    
    
};


#endif /* UI_h */
