#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <string>

using namespace std;

class Rand: public Base{

	private:
		double value;;
	public:
		Op() : value(rand() % 100) {}
		double evaluate(){ return value; }
		string stringify(){ return "(" + value +  ")"; }
};

#endif
