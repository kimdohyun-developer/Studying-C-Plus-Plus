#include<iostream>

using namespace std;

//�Լ� ������(function pointer)
//���α׷����� ���ǵ� �Լ��� ���α׷��� ����ɶ� ��� ���� �޸𸮿� �ö󰣴�.
//�̶� �Լ��� �̸��� �޸𸮿� �ö� �Լ��� �����ּҸ� ����Ű�� ������ ���(constant pointer)�� �ȴ�.
//�̷��� �Լ��� �����ּҸ� ����Ű�� ������ ����� �Լ� ������(funtion pointer)��� �θ���.
//�Լ� �������� ������ Ÿ���� �Լ��� ��ȯ���� �Ű������� ���� �����ȴ�.
//��, �Լ��� ������ �˾Ƴ��߸� �ش��Լ��� �´� �Լ� �����͸� ���� �� �ֽ��ϴ�.

//�Լ��� ����-�� 
//void Func(int, int);

//���� �Լ� ������ ���� ������ �Լ� ������ 
//void (*ptr_func)(int, int); - �������� �켱���� ������ �ݵ�� *ptr_func�κ��� ��ȣ�� �ѷ��ξ� ���������� �����Ѵ�.

//����-��Ģ���� ����. 
 
double Add(double, double); //�Լ��� �������� 
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
double Calculator(double, double,  double(*func)(double, double)); 
 
int main(void)
{
	double(*clac)(double, double)=NULL; //�Լ� ������ ����-��������(null pointer)
	//��Ģ���� �Լ��� ã�ư����� �ϴ� �Լ� �����͸� Null������ �����ν� �ƹ��͵� �������� ���� ���¸� �����. 
	double num1 = 3, num2 = 4, result = 0;
	char oper ='*'; //��ȣ�� ���� ���� ����.
	
	switch(oper) //Calculator�Լ��� function�� �־��ִ� ���ǹ�. 
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
		     cout<<"��Ģ����(+,-,*,/)���� �����մϴ�.";
			 break;					
	} 
	
	result = Calculator(num1, num2, clac);
	cout<<"������ ���: "<<result;
	return 0; 
	
}


double Add(double num1, double num2) //���ϱ� 
{
	return num1+num2;
} 
double Sub(double num1, double num2) //���� 
{
	return num1-num2;
} 
double Mul(double num1, double num2) //���ϱ� 
{
	return num1*num2;
} 
double Div(double num1, double num2) //������ 
{
	return num1/num2;
} 
double Calculator(double num1, double num2, double(*func)(double,double)) //�� �Լ��� �Լ� �̸��� �ְ� �Ǹ� �����Ͱ� �Լ��� ã�Ƽ� ��. 
{
	return func(num1, num2);
}
