#ifndef MULT_HPP
#define MULT_HPP


#include "base.hpp"
#include <string>

using namespace std;

class NegativeMult: public Base{
	public:
		NegativeMult(){	 
			 
		}
		virtual double evaluate() {return -1 * 90;}
		virtual string stringify() {return "(" + "-1" + "*" + "90" + ")";}
};

class ZeroMult: public Base {
	public:
		ZeroMult(){}
		virtual double evaluate() {return 0 * 45;}
		virtual string stringify() {return "(" + "0" + "*" +  "45" + ")";}

};

#endif
