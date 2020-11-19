#include<memory>

void use_smart_pointer(std::unique_ptr<int>& num);

std::unique_ptr<int> get_smart_pointer();

//Create ref function w reference and pointer parameter 
void ref_ptr(int& num1, int* num2);

//Create return pointer function