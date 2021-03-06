/*                Deep copy and shallow copy
 * shello copy ->Creating copy of object by copying data of all member as it is.
 * Deep copy -> Creating an object by coping data of another object along with the value of memory resources outside the object but handled by that object.
 *
 */
#include<iostream>
using namespace std;
class Dummy
{
	private:
		int a,b;
		int *p;
	public:
		Dummy()
		{
			cout<<"inside construtor"<<endl;
			p = new int;
			cout<<"address of p = "<<p<<endl;
		}
		void setData(int x,int y,int z)
		{
			a = x;b=y;*p = z;
		}
		void showData()
		{
			cout<<"a="<<a<<",b="<<b<<",*p="<<*p<<endl;
			cout << "show data address of p = "<<p<<endl;
		}
		void changeData(int z)
		{
			*p=z;
		}
};
int main()
{
	Dummy d1,d3;
	d1.setData(3,4,6); // a= 3, b = 4, c = 6
	Dummy d2 = d1;// copy constructor is called 
	d2.showData();
	d3 = d1;// implicit copy assigment operator is called
	d3.showData();
	d2.changeData(8);// *p = 8 now
	d1.showData();
	d3.showData();
	return 0;
}
