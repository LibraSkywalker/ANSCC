//
// Created by bill on 11/21/16.
//

#include <assert.h>
#include "VariableSymbol.h"

VariableSymbol::VariableSymbol(string _name,TypeSymbol& type,int dimension = 0) {
    name = _name;
    assert(type.equals("int") || dimension == 0);
    property = new Property(&type,dimension);
}

VariableSymbol::VariableSymbol(string _name,TypeSymbol* type,int dimension = 0) {
    name = _name;
    assert(type->equals("int") || dimension == 0);
    property = new Property(type,dimension);
}

VariableSymbol::VariableSymbol() {}

void VariableSymbol::setProperty(Property& _property) {
    property = &_property;
}

VariableSymbol::VariableSymbol(string _name) {
    name = _name;
}

string VariableSymbol::getName() {
    return name;
}

bool VariableSymbol::isInteger() {
    return property->isInteger();
}