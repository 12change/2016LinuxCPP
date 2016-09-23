#include <iostream>
#include <sstream>
using namespace std;
int main(int argc, char const *argv[])
{
	int input;
	stringstream result("");
	cin >> input;
	int INPUT = input;
	for (int i = 2; i <= input; ++i)
	{
		while(input%i==0){
			input/=i;
			if (result.str()=="")
				result << i;
			else
				result << '*' << i;			
		}
	}
	cout << INPUT << '=' << result.str();	
	return 0;
}
