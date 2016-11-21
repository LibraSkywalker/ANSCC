//
// Created by bill on 11/21/16.
//

#include "Scope.h"


#define SUCCESS true
#define FAILURE false

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

bool Scope::putVariable(string variable) {
    if (contains(variable))
        return FAILURE;
    else {
        variableDictionary[variable] = new VariableSymbol();
        return SUCCESS;
    }
}

bool Scope::contains(string variable) {
    return  (variableDictionary.count(variable) > 0) ;
}