#include<iostream>

using namespace std;

//함수 포인터의 표기법 
//함수포인터의 선언과 초기화는 21에서 봤듯이  double (*calc)(double, double) = NULL;이다.

//함수 포인터의 가장 큰 단점은 바로 복잡한 표기법이다.
//이 단점을 보완하기 위해 C++에서는 typedof, auto 키워드를 제공한다.

//typedof
//이 키워드를 이용하면 복잡한 함수 포인터형에 새로운 이름을 붙일 수 있다. 
//typedef double (*CalcFunc)(double, double); // 함수 포인터에 calcFunc이라는 새로운 이름을 붙임.
//CalcFunc ptr_func = calc;

//auto
//이 키워드를 이용하면 복잡한 함수 포인터형을 자동 타입 변환할 수 있다.
//auto ptr_func = calc;

//예제

typedef double (*Arith)(double, double); // typedef 키워드를 이용한 새로운 이름 선언 

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
double Calculator(double , double, Arith);

int main(void)
{
	Arith calc = NULL; // 함수 포인터 선언
    double num1 = 4, num2 = 5, result = 0;
    char oper = '+';
    
    switch (oper)
    {
        case '+' :
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
        	cout << "사칙연산(+, -, *, /)만을 지원합니다.";
    }
     
    result = Calculator(num1, num2, calc);
    cout << "사칙 연산의 결과는 " << result << "입니다.";
    return 0;	
}

double Add(double num1, double num2)
{
	return num1 + num2;
}

double Sub(double num1, double num2)
{
	return num1 - num2;
}

double Mul(double num1, double num2)
{
	return num1 * num2;
}

double Div(double num1, double num2)
{
	return num1 / num2;
}

double Calculator(double num1, double num2, Arith func)
{
    return func(num1, num2);
}
