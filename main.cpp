#include "main.h"

using namespace std;

class CodeBase {
	private:
		Assignment1 * assignment1;
		static CodeBase * instance;

	public:
		CodeBase(void) {
			assignment1 = Assignment1::GetInstance();
		}//Constructor
		~CodeBase(void) {
			delete assignment1;
			delete instance;
		}//Deconstructor
		static CodeBase * GetInstance()
	    {
	        if (instance == NULL)
	        {
	            instance = new CodeBase();
	        }
	        return instance;
	    }//GetInstance
		int mainRoutine() {
			cout << "Hello World!" << endl;
			return 0;
		}
};

CodeBase * CodeBase::instance = NULL;

int main() {
	CodeBase * codeBase;
	codeBase = CodeBase::GetInstance();
	try {
		return codeBase->mainRoutine();
	} catch(int e) {
		cout << "Error:\n" << e << endl;
	}
	return 1;
}
