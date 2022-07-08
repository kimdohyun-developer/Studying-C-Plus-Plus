#include<iostream>

using namespace std;

//예제-함수의 인수로 구조체의 주소를 직접 전달하는 예.
struct Prop 
{
	int savings;
	int loan;
};

int CalcProperty(Prop*); //포인터로 구조체의 주소를 넣을 수 있게 함. 

int main(void)
{
   	int kim_prop;
	Prop kim = {100000000,40000};
	kim_prop = CalcProperty(&kim);//구조체의 주소를 함수의 인수로 전달함. 

	cout<<"kim의 재산-적금: "<<kim.savings<<" 대출: "<<kim.loan
	<<"대출을 제외한 총 재산: "<<kim_prop;
	return 0; 
}

int CalcProperty(Prop*money)
{
	money->savings = 100; //호출된 함수에서 원본 구조체의 데이터를 변경.
	//이렇게 데이터를 바꿀 수 도 있음.
	//->는 포인터를 통해 멤버에 접근하는 것. "."과는 다르다. "."은 클래스의 멤버에 직접 접근하는 것. 
	return (money->savings-money->loan); 
	//포인터를 인수로 전달하는 방식은 구조체의 복사본이 아닌 주소 하나만을 전달하므로 빠르다는 장점을 가진다.
	//하지만 호출된 함수에서 원본 구조체에 직접 접근하므로, 원본 데이터의 보호 측면에서는 매우 위험하다. 
	//그래서  const 키워드를 사용하여 전달된 인수를 함수내에서는 직접 수정할 수 없도록 하는 것이 좋다. 
} 

//13-3에 const를 이용해 보완한 코드를 적어놨다. 
