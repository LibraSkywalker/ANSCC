//
// Created by bill on 11/21/16.
//

#ifndef ANTCC_VARIABLESYMBOL_H
#define ANTCC_VARIABLESYMBOL_H


#include "Property.h"

class VariableSymbol {
    Property *property;
    string name;
public:
    // declare a variable
    VariableSymbol(string _name,TypeSymbol* type,int dimension);
    VariableSymbol(string _name,TypeSymbol& type,int dimension);
    VariableSymbol(string _name);
    VariableSymbol();
    void setProperty(Property& _property);

    // determine a variable
    bool isInteger();
    string getName();
};


#endif //ANTCC_VARIABLESYMBOL_H
