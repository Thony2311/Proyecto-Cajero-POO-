#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>
using namespace std;

class Exception
{
	public:
		Exception();
		Exception(string message);
		string getMessage();
		~Exception();
		
		
	private:
		string message;
};

#endif
