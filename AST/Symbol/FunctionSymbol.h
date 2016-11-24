//
// Created by bill on 11/21/16.
//

#ifndef ANTCC_FUNCTIONSYMBOL_H
#define ANTCC_FUNCTIONSYMBOL_H


#include <list>
#include "../Scope.h"

class FunctionSymbol {
    string name;
    Scope* functionScope;
    list<string> parameterList;
    VariableSymbol returnValue;

public:
    //declare a function
    FunctionSymbol();
    FunctionSymbol(string _name);
    bool addParameter(VariableSymbol& now);


    //determine a function
    bool checkParameter(VariableSymbol& now,int position);
};


#endif //ANTCC_FUNCTIONSYMBOL_H
