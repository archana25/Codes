//Set STL of C++.Works great even if the elements are not sorted as it will implicitly sort it

#include<set>
#include<iostream>
#include<algorithm>

using namespace std;

int set_demo()
{
	set<int> test_set;
	test_set.insert(34);
	test_set.insert(-2);
	test_set.insert(4453);
	test_set.insert(23);
	test_set.insert(0);
	test_set.insert(1);


	for(int index:test_set)
		cout<<index<<" ";

	//If element is not present find will return set.end()
	auto it = test_set.find(-122);
	if(it == test_set.end())
		cout<<"Element not present";
	else
		cout<<"Iterator"<<*it;
	
	auto upper = test_set.lower_bound(1);
	auto lower = test_set.lower_bound(0);

	cout<<"Upper for 1:"<<*upper;
	cout<<"Upper for 0:"<<*lower;


	return 0;

}

int main()
{
	set_demo();

	return 0;

}

