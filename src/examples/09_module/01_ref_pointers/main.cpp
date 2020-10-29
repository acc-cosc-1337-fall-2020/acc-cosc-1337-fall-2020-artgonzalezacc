#include "ref_pointers.h"
#include<iostream>
#include<memory>
#include<vector>
#include<utility>

using std::cout; using std::unique_ptr;  using std::make_unique;

int main() 
{
	//Reference
	int num = 20, num2 = 25;
	int& num_ref = num;
	
	cout<<"Value of num: "<<num<<"\n";
	cout<<"Address of num: "<<&num<<"\n";
	cout<<"Address of num via num_ref: "<<&num_ref<<"\n";
	cout<<"Value of num via num_ref: "<<num_ref<<"\n\n";

	cout<<"Value of num2: "<<num2<<"\n";
	cout<<"Address of num2: "<<&num2<<"\n\n";

	num_ref = num2;//assigning the value of num2 to num

	cout<<"Value of num: "<<num<<"\n";
	cout<<"Value of num2: "<<num2<<"\n";
	cout<<"Address of num via num_ref: "<<&num_ref<<"\n\n";

	//pointer
	int num1 = 10, num3 = 15;
	int* num_ptr = &num1;

	cout<<"Value of num1: "<<num1<<"\n";
	cout<<"Address of num1: "<<&num1<<"\n";
	cout<<"Address of num via num_ptr: "<<num_ptr<<"\n";
	cout<<"Value of num via num_ptr: "<<*num_ptr<<"\n\n";

	num_ptr = &num3;//save the address of num3 to num_ptr

	cout<<"Address of num3: "<<&num3<<"\n";
	cout<<"Address of num3 via num_ptr: "<<num_ptr<<"\n";
	cout<<"Value of num3 via num_ptr: "<<*num_ptr<<"\n\n";

	//create dynamic memory(heap) with a pointer
	int* ptr_num1 = new int(5);
	cout<<"Value of ptr_num1 "<<*ptr_num1<<"\n\n";

	delete ptr_num1;

	//smart pointers - unique pointers
	unique_ptr<int> up_num = make_unique<int>(100);
	cout<<"Value of smart pointer: "<<*up_num<<"\n\n";
	use_smart_pointer(up_num);

	unique_ptr<int> up_num1 = get_smart_pointer(); 
	cout<<"Value of smart pointer: "<<*up_num1<<"\n\n";
	use_smart_pointer(up_num1);

	unique_ptr<int> up_num2(new int(15));
	cout<<"Value of smart pointer: "<<*up_num2<<"\n\n";

	//what about ownership of unique pointer
	std::vector<unique_ptr<int>> numbers;
	numbers.push_back(std::move(up_num));
	cout<<"Vector unique ptr at 0: "<<*numbers[0]<<"\n";

	return 0;
}