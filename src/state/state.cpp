#include <iostream>

#include "state.h"

using namespace std;

State::State(string name)
{
	this->name=name;
}

State::~State()
{
}

void State::print() const
{
	cout<<name<<endl;
}
