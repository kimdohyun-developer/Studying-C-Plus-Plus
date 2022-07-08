#include<iostream>

using namespace std;

//구조체는 함수를 호출할 때 전달되는 인수나, 함수가 종료될 때 반환되는 반환값으로 사용할 수 있다.
//이 방식은 기본타입과 같으며, 구조체를 가리키는 포인터나 구조체의 한 멤버 변수만을 사용할 수 도 있다. 

//예제- 구조체의 멤버변수를 함수의 인수로 전달하는 예 
struct Prop 
{
	int savings;
	int loan;
};

int CalcProperty(int,int);

int main(void)
{
	int kim_prop;
	Prop kim = {100000000,40000};
	kim_prop = CalcProperty(kim.savings,kim.loan); //사용자 정의함수로 계산한 값을 할당. 
	//구조체의 멤버변수를 함수의 인수로 전달함.
	
	cout<<"kim의 재산-적금: "<<kim.savings<<" 대출: "<<kim.loan
	<<"대출을 제외한 총 재산: "<<kim_prop;
	return 0; 
}

int CalcProperty(int s, int i) //사용자 정의 함수 
{
	return s-i;
}
