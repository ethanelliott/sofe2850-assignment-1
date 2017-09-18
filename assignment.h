#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H


class Assignment1 {
private:
	static Assignment1 * instance;
public:
	Assignment1(void);
	~Assignment1(void);
	static Assignment1* GetInstance();
};

#endif
