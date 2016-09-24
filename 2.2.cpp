#include <iostream>  
#include <iomanip>
using namespace std;
typedef enum {SUN,MON,TUE,WED,THU,FRI,SAT} WEEKDAY;
int main(int argc, char const *argv[])
{
    const WEEKDAY day_1 = FRI;
    cout << "Calendar 2016-01"<<endl;
    cout << "--------------------------"<<endl;
    cout << "Su  Mo  Tu  We  Th  Fr  Sa"<<endl;
    cout << "--------------------------"<<endl;
    cout << setw(22) << '1'; 
    for (int i = 2; i < 32; ++i)
    {
        switch((WEEKDAY)((day_1+i-1)%7)){
            case SUN : cout << setw(2) << i;break;
            case MON : cout << setw(4) << i;break;
            case TUE : cout << setw(4) << i;break;  
            case WED : cout << setw(4) << i;break;  
            case THU : cout << setw(4) << i;break;
            case FRI : cout << setw(4) << i;break;
            case SAT : cout << setw(4) << i <<endl;break;

        }
    }
    return 0;
}
  
