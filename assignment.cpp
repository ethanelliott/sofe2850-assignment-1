#include "main.h"

Assignment1 * Assignment1::instance = NULL;

Assignment1::Assignment1(void) {
}

Assignment1::~Assignment1(void) {
	delete instance;
}

Assignment1 * Assignment1::GetInstance() {
	if (instance == NULL)
    {
        instance = new Assignment1();
    }
    return instance;
}
