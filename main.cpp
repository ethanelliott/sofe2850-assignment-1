/*
 *
 *
 *
 */

#include "main.h"

using namespace std;

class CodeBase {
	private:
		Test * test;
		static CodeBase * instance;

	public:
		CodeBase(void) {
			test = Test::GetInstance();
		}//Constructor
		~CodeBase(void) {
			delete test;
			delete instance;
		}//Deconstructor
		static CodeBase * GetInstance() {
			if (instance == NULL) {
				instance = new CodeBase();
			}
			return instance;
		}//GetInstance
		int Main() {
			test->saySomething();
			return 0;
		}
};

START_MAIN_CLASS(CodeBase);
