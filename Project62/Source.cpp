#include<iostream>
using namespace std;

class A
{
private:
	int m_fieldA;

public:
	A(const int valueA);
	~A();
	void ShowA() const;
};

class B
{
private:
	int m_fieldB;
public:
	B(const int valueB);
	~B();
	void ShowB() const;
};


class C : public B, public A
{
private:
	int m_fieldC;
public:
	C(const int valueA, const int valueB, const int valueC);
	~C();
	void ShowC() const;
};

A::A(const int valueA) : m_fieldA(valueA)
{
	cout << "Constructor A" << endl;
}

A::~A()
{
	cout << "Destructor A" << endl;
}

void A::ShowA() const
{
	cout << m_fieldA << endl;
}

B::B(const int valueB) : m_fieldB(valueB)
{
	cout << "Constructor B" << endl;
}

B::~B()
{
	cout << "Destructor B" << endl;
}

void B::ShowB() const
{
	cout << m_fieldB << endl;
}

C::C(const int valueA, const int valueB, const int valueC) :
	A(valueA), B(valueB), m_fieldC(valueC)
{
	cout << "Constructor C" << endl;
}

C::~C()
{
	cout << "Destructor C" << endl;
}

void C::ShowC() const
{
	cout << m_fieldC << endl;
}

int main()
{
	C obj(10, 20, 30);
	obj.ShowA();
	obj.ShowB();
	obj.ShowC();
}

