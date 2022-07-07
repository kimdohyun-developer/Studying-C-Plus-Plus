#include<iostream>

using namespace std;

int main()
{
	//구조체(structure)
	//사용자가 새롭게 정의할 수 있는 사용자 정의 타입이다.
	//기본 타입만으로는 나타낼 수 없는 복잡한 데이터를 표현가능하게 한다.
	//C++에서는 struct를 쓰지 않아도 구조체를 만들 수 있다.
	 
	//구조체의 선언
	
	struct party
	{
		int cake; //이런식으로 필드를 구성한다. 
		int juice; //이것은 멤버변수라고 한다. 
	}; 
	
	//구조체 변수 선언

	struct party P; //struct 구조체 이름 구조체 변수이름; 이런식으로 선언한다.
	
	//구조체 변수의 초기화
	
	P={2,3}; //구조체 변수이름 = {멤버변수1의초깃값, 멤버변수2의초깃값, ...};
	
	cout<<"케이크의 수: "<<P.cake<<" 주스의 수: "<<P.juice; 
}
