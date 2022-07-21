#include<iostream>

using namespace std;

//프랜드 클래스(friend class)
//만약 두 클래스가 기능상으로 서로 밀접한 관계에 있고, 상대방의 private멤버에 접근해야만 한다면 클래스 자체를 프렌드로 선언하는 것이 좋다.
//프렌드 클래스란 해당 클래스의 모든 멤버변수가 특정 클래스의 프렌드인 클래스를 의미합니다.

//문법
//friend class 클래스이름; 

//예제

class A
{
	private:	
	    int a1;
	    int a2;
	    friend class B; //프랜드 클래스를 선언한다. 
	public:
		A(int a1, int a2)
		{
			this->a1 = a1;
			this->a2 = a2;
		}
};

class B
{
	public:
		void info_A(A aa) //위에 프랜드 클래스를 선언했기 때문에 다른 클래스의 private멤버변수를 가져올 수 있다. 
		{
			cout<<"a1: "<<aa.a1<<" a2: "<<aa.a2;
		}
};

int main(void)
{
	A aa(150,320);
	B bb;
	bb.info_A(aa);
} 
