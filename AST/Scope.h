//
// Created by bill on 11/21/16.
//

#ifndef ANTCC_SCOPE_H
#define ANTCC_SCOPE_H

#include <map>
#include <vector>
#include "Symbol/FunctionSymbol.h"
#include "Symbol/VariableSymbol.h"
#include "Symbol/TypeSymbol.h"
#include "Statement/Statement.h"

using namespace std;

class Scope {
    map<string,FunctionSymbol*> functionDictionary;
    map<string,VariableSymbol*> variableDictionary;
    map<string,TypeSymbol*> typeDictionary;
    vector<Statment*> statements;
    Scope* parentScope;

    bool accept();


    public:
    bool foundVariable(string variable);
    bool contains(string variable);
    VariableSymbol* putVariable(string variable);
    VariableSymbol* putVariable(VariableSymbol& variable);
};


#endif //ANTCC_SCOPE_H
