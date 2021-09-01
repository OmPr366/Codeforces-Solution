#include<iostream>
using namespace std;
class sum
{
	int a,b,c;
	public:
	void input()
	{
	cout<<"Enter a,b and c: ";
	cin>>a>>b>>c;
	}
	void display()
	{
	cout<<"A="<<a<<" "<<"B="<<b<<" "<<"and C="<<c<<endl;
	}
	sum add(sum T1,sum T2);
	
};
sum sum::add(sum T1,sum T2)
{
	sum R;
	R.a=a+T1.a+T2.a;
	R.b=b+T1.b+T2.b;
	R.c=c+T1.c+T2.c;
	return R;
}
 
int main()
{
	sum s1,s2,s3,s4;
	s1.input();
	s2.input();
	s3.input();
	s4=s1.add(s2,s3);
	
	s4.display();
}