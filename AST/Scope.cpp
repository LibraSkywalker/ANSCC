//
// Created by bill on 11/21/16.
//

#include "Scope.h"


#define SUCCESS true
#define FAILURE nullptr

bool Scope::accept(){
    for(auto statment : statements){
        if (!statment->accept()) return false;
    }
    return true;
}

bool Scope::foundVariable(string variable){
    if (contains(variable))
        return true;
    else if (parentScope == nullptr)
        return false;
    else
        return parentScope->foundVariable(variable);
}

VariableSymbol* Scope::putVariable(string variable) {
    if (contains(variable))
        return FAILURE;
    else {
        variableDictionary[variable] = new VariableSymbol(variable);
        return variableDictionary[variable];
    }
}

VariableSymbol* Scope::putVariable(VariableSymbol &variable) {
    if (contains(variable.getName()))
        return FAILURE;
    else{
        variableDictionary[variable.getName()] = &variable;
        return &variable;
    }
}

bool Scope::contains(string variable) {
    return  (variableDictionary.count(variable) > 0) ;
}