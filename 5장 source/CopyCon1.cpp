/*
   CopyCon1.cpp
*/
#include<iostream>
using std::cout;
using std::endl;

class AAA
{
public:
	AAA(){
		cout<<"AAA() 호출"<<endl;
	}
	AAA(int i){
		cout<<"AAA(int i) 호출"<<endl;
	}
	AAA(const AAA& a){
		cout<<"AAA(const AAA& a) 호출"<<endl;
	}
};

int main(void)
{
	AAA obj1;
	AAA obj2(10);
	AAA obj3(obj2);

	return 0;
}