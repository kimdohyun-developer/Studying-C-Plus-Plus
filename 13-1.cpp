#include<iostream>

using namespace std;

//����ü�� �Լ��� ȣ���� �� ���޵Ǵ� �μ���, �Լ��� ����� �� ��ȯ�Ǵ� ��ȯ������ ����� �� �ִ�.
//�� ����� �⺻Ÿ�԰� ������, ����ü�� ����Ű�� �����ͳ� ����ü�� �� ��� �������� ����� �� �� �ִ�. 

//����- ����ü�� ��������� �Լ��� �μ��� �����ϴ� �� 
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
	kim_prop = CalcProperty(kim.savings,kim.loan); //����� �����Լ��� ����� ���� �Ҵ�. 
	//����ü�� ��������� �Լ��� �μ��� ������.
	
	cout<<"kim�� ���-����: "<<kim.savings<<" ����: "<<kim.loan
	<<"������ ������ �� ���: "<<kim_prop;
	return 0; 
}

int CalcProperty(int s, int i) //����� ���� �Լ� 
{
	return s-i;
}
