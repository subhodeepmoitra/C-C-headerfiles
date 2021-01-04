#include<iostream>
using namespace std;
class Check
{
    int i;
    public:
       void operator ++();
       void display();
};
void Check :: operator ++()
{
    i=0;
    ++i;
    
}
void Check :: display()
{
    cout << "i = " << i << endl;
}
int main()
{
    Check obj;
    obj.display();
    ++obj;
    obj.display();
    return 0;
}