#include "vec.h"
#include<iostream>
#include<string>
#include<vector>

using std::vector;  using std::cout; using std::string;

int main() 
{
	vector<string> nums{"joe", "mary", "bob"};
	cout<<"Capacity: "<<nums.capacity()<<"\n";
	
	nums.push_back("john");

	cout<<"Capacity: "<<nums.capacity()<<"\n";

	cout<<nums[3]<<"\n\n";

	for(std::size_t i=0; i < nums.size(); ++i)
	{
		cout<<nums[i]<<"\n";
	}

	cout<<"\n for ranged \n";

	for(auto n: nums)
	{
		cout<<n<<"\n";
	}

	return 0;
}