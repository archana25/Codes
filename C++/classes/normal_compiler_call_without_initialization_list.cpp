//States how initialization list optimises the program
//Author : Archana Mohan

#include<iostream>
using namespace std;

class Type
{

public:
	Type()
	{
		cout<<"Type's constructor called"<<endl;
	};

	Type(const Type &var) 
	{
		cout<<"Copy constructor called"<<endl;
	}
	Type& operator=(const Type &obj)
	{
		if(this == &obj)
			return *this;
		cout<<"Assignment operator called"<<endl;
		return *this;
	}
};

class Test
{
	Type obj;
public:
	Test(Type &obj)
	{
		this->obj = obj;
		cout<<"B's constructor"<<endl;
	}

};

int main()
{
	Type obj;
	Test obj_1(obj);
	return 0;
}
