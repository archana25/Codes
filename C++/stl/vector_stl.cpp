#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comparator_function(int var_1,int var_2)
{
	// Returns comparator value
	
	return var_1>var_2;

}
int main(void)
{
	bool present;
	vector<int> test_vector = {12,345,21,45,32};
	//Accessing elements of Vector
	cout<<"Second element"<<test_vector[2];
	//Sorting
	sort(test_vector.begin(),test_vector.end());
	//cout<<test_vector;

	//Searching(Binary Search (Ologn))
	present = binary_search(test_vector.begin(),test_vector.end(),2321);
	cout<<"Element 2321 present:"<<present;

	//Push element at the end
	test_vector.push_back(455);
	test_vector.push_back(455);
	test_vector.push_back(455);
	test_vector.push_back(455);
	test_vector.push_back(455);
	test_vector.push_back(1231);

	//Find first occurrence of 455 in the vector
	vector<int>::iterator lower_it = lower_bound(test_vector.begin(),test_vector.end(),455);
	vector<int>::iterator upper_it = upper_bound(test_vector.begin(),test_vector.end(),455);

	cout<<*lower_it<<*upper_it;

	//To save time you can also use auto and C++ will understand that is is of iterator type
	auto it = lower_bound(test_vector.begin(),test_vector.end(),1233);
	cout<<"Lower bound of 1233"<<*it<<endl;
	//Difference beween the iterators
	//O(1)(Count no. of times 100 is occurring)
	cout<<"Difference between the iterators"<<upper_it-lower_it;

	//Printing the Vector
	vector<int>::iterator index;
	
	for(index = test_vector.begin();index!=test_vector.end();index++)
		cout<<"Element"<<*index<<endl;
	//Sorting in descending order
	
	//sort(test_vector.begin(),test_vector.end(),greater<int>());
	//for(index = test_vector.begin();index!=test_vector.end();index++)
	//	cout<<"Element"<<*index<<endl;

	sort(test_vector.begin(),test_vector.end(),comparator_function);
	for(index = test_vector.begin();index!=test_vector.end();index++)
		cout<<"Element"<<*index<<endl;
	//Printing without iterator
	cout<<"Without iterator";	
	for(int parse:test_vector)
	{
		if(parse%2 == 1)
			parse = 1;
		cout<<parse<<" ";
	}
	cout<<"\n"<<"Parsing the vector after no reference";
	for(int parse:test_vector)
	{
		cout<<parse<<" ";
	}
	//With reference you can update as well as parse
	cout<<"With reference";
	for(int &x:test_vector)
	{
		if(x%2 == 0)
			x=2;
		cout<<x<<" ";
	}
	cout<<"\n"<<"Parsing the vector after reference";
	for(int parse:test_vector)
	{
		cout<<parse<<" ";
	}





}
