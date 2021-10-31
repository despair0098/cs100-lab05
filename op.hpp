#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <string>

using namespace std;

class Op : public Base { 
    private:
	double value;
	Base* string;
    public:
        Op(double value) : Base(value) { }
        virtual double evaluate() { return value; }
        virtual std::string stringify() { return "(" + toString(value)  + ")"; }
};

#endif //__OP_HPP__
