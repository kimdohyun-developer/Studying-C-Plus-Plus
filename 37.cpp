#include<iostream>

using namespace std;

//������ �����ε�(operator overloading)
//C++������ �Լ� �����δ�� ���� �������� �����ڿ� ���ؼ��� �����δ��� �����Ѵ�.
//���� ������ �����δ��� ����� ���� Ÿ�Ա��� Ȯ���� �� ������, Ŭ������ �ϳ��� Ÿ������ Ȯ���� �����ش�.

//������ �Լ�(operator function)
//C++������ �����ڸ� �����δ��ϱ� ���ؼ� ������ �Լ�(operator function)��� ���� ����Ѵ�.
//����
//operator�����ε��ҿ�����(�Ű��������)

//������ �Լ��� operatorŰ���带 ����Ͽ� �����ڸ� ����Ͽ� �����ڸ� �����ε��Ѵ�.
//�����ε��� �����ڴ� ������ C++�����ڿ��� �ϸ�, operatorŰ����� ������� ����Ǿ� ǥ���ؾ� �Ѵ�. 
//�̷��� ������ �Լ��� ������ ������ �Լ� �̸���ſ� �����ϰ� �����ڸ� ����� �� �ִٴ� ���̴�.

//����
 
class Num
{
	int num1;
	int num2;
	
	
	public:
		Num(){};
		Num(int a,int b)
		{
			num1=a;
			num2=b;
		}
		void showNum()
		{
			cout<<"num1: "<<num1<<" num2: "<<num2<<endl;
		}
		
		Num operator++(int) //�����ε��̴ϱ� �Ű������� �־ �ǰ� ��� �ȴ�. 
		{
			num1+=1;
			num2+=1;
			return *this; //this �����ͷ� ��ü�� ��ȯ�Ѵ�. 
		}
};
int main(void)
{
	Num t1(10,2);
	Num t2;
	cout<<"t2"<<endl; 
	t2.showNum();
	cout<<"t1"<<endl;
	t1.showNum();
	
	t2=t1++; //�̷������� �����ε��� �����ڸ� ����� �� �ִ�. 
	cout<<"t2"<<endl;
	t2.showNum();
	cout<<"t1"<<endl;
	t1.showNum();
	return 0;
}
