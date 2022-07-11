#include<iostream>

using namespace std;

//�Լ� �������� ǥ��� 
//�Լ��������� ����� �ʱ�ȭ�� 21���� �õ���  double (*calc)(double, double) = NULL;�̴�.

//�Լ� �������� ���� ū ������ �ٷ� ������ ǥ����̴�.
//�� ������ �����ϱ� ���� C++������ typedof, auto Ű���带 �����Ѵ�.

//typedof
//�� Ű���带 �̿��ϸ� ������ �Լ� ���������� ���ο� �̸��� ���� �� �ִ�. 
//typedef double (*CalcFunc)(double, double); // �Լ� �����Ϳ� calcFunc�̶�� ���ο� �̸��� ����.
//CalcFunc ptr_func = calc;

//auto
//�� Ű���带 �̿��ϸ� ������ �Լ� ���������� �ڵ� Ÿ�� ��ȯ�� �� �ִ�.
//auto ptr_func = calc;

//����

typedef double (*Arith)(double, double); // typedef Ű���带 �̿��� ���ο� �̸� ���� 

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
double Calculator(double , double, Arith);

int main(void)
{
	Arith calc = NULL; // �Լ� ������ ����
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
        	cout << "��Ģ����(+, -, *, /)���� �����մϴ�.";
    }
     
    result = Calculator(num1, num2, calc);
    cout << "��Ģ ������ ����� " << result << "�Դϴ�.";
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
