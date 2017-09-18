#include "main.h"

using namespace std;

class Assignment1 {
	private:
		//CalculateThing *calcThing;
		static Assignment1* instance;

	public:
		Assignment1(void) {
			//calcThing = CalculateThing::GetInstance();
		}//Constructor
		~Assignment1(void) {
			//delete calcThing;
			delete instance;
		}//Deconstructor
		static Assignment1* GetInstance()
	    {
	        if (instance == NULL)
	        {
	            instance = new Assignment1();
	        }
	        return instance;
	    }//GetInstance
		int mainRoutine() {
			cout << "Hello World!" << endl;
		}
}

Assignment1* Assignment1::instance = NULL;

int main() {
	Assignment1 * codeBase;
	codeBase = Assignment1::GetInstance();
	try {
		return codeBase->mainRoutine();
	} catch(int e) {
		cout << "Error:\n" << e << endl;
	}
	return 1;
}
