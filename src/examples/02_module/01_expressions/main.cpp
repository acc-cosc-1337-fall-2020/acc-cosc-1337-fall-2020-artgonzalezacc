#include<string>
#include<iostream>
using std::cout; std::using string;
void loop_string(const string &str)

{
      string name = "mary";
      for (int i = 0; i < str.length(); ++i)
      {
             str[i] = name[i];
      }
} 

int main()
{

      string str = "john";

      loop_string(str);
      cout << str;
 
      return 0;
}