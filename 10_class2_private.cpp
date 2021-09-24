#include <iostream>
using namespace std;

class Human
{ 
  private:
    int age()
    {
    return 24;        
    }
};

int main() 
{

  Human Rony;
  cout << "Rony's age = " << Rony.age() << endl;  

  return 0;
}