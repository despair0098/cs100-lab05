#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <strng>

class Op : public Base { 
    private:
	double value;
    public:
	op() : number(0) {}
        Op(double value) : Base(value) { }
        virtual double evaluate() { return value; }
        virtual std::string stringify() { return to_string(value); }
};

#endif //__OP_HPP__
