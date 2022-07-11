#include<iostream>

using namespace std;

//함수 포인터(function pointer)
//프로그램에서 정의된 함수는 프로그램이 실행될때 모두 메인 메모리에 올라간다.
//이때 함수의 이름은 메모리에 올라간 함수의 시작주소를 가리키는 포인터 상수(constant pointer)가 된다.
//이렇게 함수의 시작주소를 가리키는 포인터 상수를 함수 포인터(funtion pointer)라고 부른다.
//함수 포인터의 포인터 타입은 함수의 반환값과 매개변수에 의해 결정된다.
//즉, 함수의 원형을 알아내야만 해당함수에 맞는 함수 포인터를 만들 수 있습니다.

//함수의 원형-예 
//void Func(int, int);

//위의 함수 원형에 대한 적절한 함수 포인터 
//void (*ptr_func)(int, int); - 연산자의 우선순위 때문에 반드시 *ptr_func부분을 괄호로 둘러싸야 정상적으로 동작한다.

//예제-사칙연산 계산기. 
 
double Add(double, double); //함수의 원형선언 
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
double Calculator(double, double,  double(*func)(double, double)); 
 
int main(void)
{
	double(*clac)(double, double)=NULL; //함수 포인터 선언-널포인터(null pointer)
	//사칙연산 함수를 찾아가도록 하는 함수 포인터를 Null값으로 둠으로써 아무것도 지정하지 않은 상태를 만든다. 
	double num1 = 3, num2 = 4, result = 0;
	char oper ='*'; //기호를 통한 연산 설정.
	
	switch(oper) //Calculator함수에 function을 넣어주는 조건문. 
	{
		case '+':
			calc = Add;
			break;
		case '-':
			calc = Sub;
			break;
		case '*':
			calc = Mul;
			break;
		case '/':
			calc = Div;
			break;	
		default:
		     cout<<"사칙연산(+,-,*,/)만을 지원합니다.";
			 break;					
	} 
	
	result = Calculator(num1, num2, clac);
	cout<<"연산의 결과: "<<result;
	return 0; 
	
}


double Add(double num1, double num2) //더하기 
{
	return num1+num2;
} 
double Sub(double num1, double num2) //빼기 
{
	return num1-num2;
} 
double Mul(double num1, double num2) //곱하기 
{
	return num1*num2;
} 
double Div(double num1, double num2) //나누기 
{
	return num1/num2;
} 
double Calculator(double num1, double num2, double(*func)(double,double)) //이 함수에 함수 이름을 넣게 되면 포인터가 함수를 찾아서 감. 
{
	return func(num1, num2);
}
