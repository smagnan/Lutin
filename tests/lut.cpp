#include <iostream>
#include <fstream>
using namespace std;

int main (int argc, char** argv) {
  ifstream testFile(argv[2]);
	if(testFile)
	{	
		return 0;
	}
	else
	{
		return 1;
	}
}
