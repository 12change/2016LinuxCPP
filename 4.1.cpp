#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	unsigned int input;
	stringstream result("");
	cin >> input;
	int INPUT = input;
	while(input%2==0){
		if (input==INPUT)
			result << '2';
		else
			result << '*' << '2';	
		input>>1;	
	}
	unsigned int t = sqrt(input)+1;
	for (int i = 3; i <= t; i+=2)
	{
		while(input%i==0){
			if (input==INPUT)
				result << i;
			else
				result << '*' << i;	
			input/=i;		
		}
	}
	if(input==INPUT)
		result << input;
	cout << INPUT << '=' << result.str()<<endl;	
	return 0;
}
