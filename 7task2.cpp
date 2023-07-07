#include<iostream>
#include<string.h>
using namespace std;
class A{
	public :
	int x,y;
	
		A(int a1,int a2)
		{
			this->x = a1;
			this->y = a2;
			
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};
int main()
{
	A a1(5,10);
}
