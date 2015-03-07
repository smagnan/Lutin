#include <iostream>

#include "State.h"

using namespace std;

State::State(string name)
{
	this->name=name;
}

void State::print() const
{
	cout<<name<<endl;
}
