#ifndef MAIN_H
#define MAIN_H

#define START_MAIN_CLASS(_ClassName_) \
	_ClassName_ * _ClassName_::instance = NULL; \
	int main() { \
		_ClassName_ *base =  _ClassName_::GetInstance(); \
		try { \
			throw(base->Main()); \
		} catch(int e) { \
			cout << "\nProgram returned " << e << "\n"; \
			return e; \
		} \
		return 0; \
	}

#include <iostream>
#include "assignment.h"

using namespace std;

#endif
