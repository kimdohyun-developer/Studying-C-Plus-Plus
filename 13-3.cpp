//13-2의 예제를  const와 함수로 보완한 예제. 
#include<iostream>

using namespace std;


struct Prop 
{
	int savings;
	int loan;
};

Prop initProperty(void); 
int CalcProperty(const Prop*);  //const 추가  

int main(void)
{
	int kim_prop;
    Prop kim = initProperty(); //initProperty()함수가 Prop의 타입이니까 그것을 할당하려면 변수도 Prop의 타입이여야함. 
	kim_prop = CalcProperty(&kim); 
	
	cout<<"kim의 재산-적금: "<<kim.savings<<" 대출: "<<kim.loan
	<<"대출을 제외한 총 재산: "<<kim_prop;
	return 0; 
}

Prop initProperty(void)
{
   	Prop kim_prop = {100000000,40000};
   	return kim_prop; //구조체를 함수의 반환값으로 반환함. 
}

int CalcProperty(const Prop*money) //const 추가 
{
	//money->savings = 100; //const를 썼기 때문에 이 코드는 효과가 없다. 
	//Plus- const가 있는 데 함수안에 인수를 수정하는 코드를 쓰면 컴파일러에서 오류가 발생한다. 
	return (money->savings-money->loan); 
} 


//const를 추가하므로써 함수내에서 인수의 값을 바꿀 수 없음.
//정보보호에 효과적. 
 
 
