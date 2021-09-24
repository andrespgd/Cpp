#include <iostream>
using namespace std;

class Robot
{ 
  public:
    int Speed()
    {
    return 10;        
    }
};

int main() 
{

  Robot robot1;
  cout << "Speed= " << robot1.Speed() << endl;  

  return 0;
}