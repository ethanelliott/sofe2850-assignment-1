#include "main.h"

Test * Test::instance = NULL;

Test::Test(void) {
}

Test::~Test(void) {
	delete instance;
}

Test * Test::GetInstance() {
	if (instance == NULL) {
		instance = new Test();
	}
	return instance;
}

void Test::saySomething() {
	std::cout << "Hello World!" << std::endl;
}
