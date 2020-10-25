#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

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
	cout<<"Element 21 present:"<<present;

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
	//Difference beween the iterators
	//O(1)(Count no. of times 100 is occurring)
	cout<<"Difference between the iterators"<<upper_it-lower_it;

}
