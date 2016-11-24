//
// Created by bill on 11/21/16.
//

#include "FunctionSymbol.h"

#define FAILURE 0
#define  SUCCESS 1

FunctionSymbol::FunctionSymbol() {}

FunctionSymbol::FunctionSymbol(string _name) {
    name = _name;
}

bool FunctionSymbol::addParameter(VariableSymbol& now) {
    if (!now.isInteger())
        return FAILURE;

    if (functionScope->contains(now.getName())) return FAILURE;

    functionScope->putVariable(now);
    parameterList.push_back(now.getName());
    return SUCCESS;
}

bool FunctionSymbol::checkParameter(VariableSymbol &now, int position) {
    if (position > parameterList.size()) return FAILURE;
    return  (now.isInteger());
}