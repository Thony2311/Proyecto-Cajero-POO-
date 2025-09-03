#include "exception.h"

Exception::Exception()
{
	this->message = "ERROR";
}

Exception::Exception(string message)
{
	this->message = message;
}

Exception::~Exception()
{
}

string Exception::getMessage(){
	return this->message;
}
