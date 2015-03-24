#include <iostream>

#include "state.h"

using namespace std;

State::State()
    : id(-1)
{
}

State::State(int i)
    : id(i)
{
}

State::~State()
{
}

int State::getId() const
{
    return id;
}
