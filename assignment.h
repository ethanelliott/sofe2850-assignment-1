#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

class Test {
public:
	Test(void);
	~Test(void);
	static Test * instance;
	static Test * GetInstance();
	void saySomething();
};

#endif
