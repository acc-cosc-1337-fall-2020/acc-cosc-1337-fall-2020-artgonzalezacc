#include<fstream>
#include<iostream>
#include<string>

using std::cout;

int main()
{
  std::ofstream out_file;

  cout<<"Open file\n";
  out_file.open("names.dat");

  cout<<"Writing names to file\n";
  out_file<<"joe\n";
  out_file<<"mary\n";
  out_file<<"john\n";

  cout<<"Done\n\n";

  out_file.close();

  std::ifstream in_file;
  cout<<"Open file for reading\n";
  in_file.open("names.dat");

  std::string name;

  if(in_file.is_open())
  {
    cout<<"File opened-- try read \n";
    while(in_file>>name)
    {
      cout<<"Read value: "<<name<<"\n";
    }
  }

  cout<<"Close file\n";

  in_file.close();
	
  cout<<"complete";

	return 0;
}