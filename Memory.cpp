// File: Memory.cpp
// Created by Joshua Stammen on 11/16/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include "Person.h"
using namespace std;
// Constants,Structs, Classes

// Prototypes


// Main Program Program

int main()
{
    Person Waldo("Waldo","Weber",123);
    Waldo.AddResource();
    Waldo.setFirstname("WaldoJr");
    Waldo.AddResource();

    Person WaldoSr = Waldo;

    Waldo = WaldoSr;

    return 0;

}
// Function Definitions