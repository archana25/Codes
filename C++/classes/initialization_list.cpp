// States the need of initialization list 
// Author : Archana Mohan

#include<iostream>
using namespace std;

class Test
{
	 
	const int test_var;//for initialization of non static const member variables
        int &test_var_ref;//fir reference var

public:
	Test(int test,int test_ref):test_var(test),test_var_ref(test_ref){}
        int get_test_var() 
	{
		cout<<test_var<<" "<<test_var_ref;
		return 0;
	}
};

class inherite_Test
{

	Test obj; //When the base class does not have a default constuctor
public:
	inherite_Test():obj(342,12){}
	int return_value = obj.get_test_var();
};
int main()
{
	inherite_Test  obj;
	return 0;
}

