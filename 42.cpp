#include<iostream>

using namespace std;

//��� ���(constant member)

//��� �������(constant member variable)
//�ѹ� �ʱ�ȭ�ϸ�, �� ���� ������ �� ���� ������� 
//�̷��� ��� ��� ������ ������ Ÿ�� �տ� constŰ���带 ����Ͽ� �����Ѵ�.
//����
//const Ÿ�� ��������̸�; 
//+Ŭ���� ��ü�� ���� ���Ǵ� �߿��� ����� ��� ��������� �����Ͽ� ����ϴ� ���� ����. 

//��� ��� �Լ�(constant member function) 
//ȣ���� ��ü�� �����͸� ������ �� ���� ����Լ� 
//�̷��� ��� ��� �Լ��� �Լ��� ���� �������� constŰ���带 ����Ͽ� �����Ѵ�.
//����
//�Լ��� ���� const;
//ȣ���� ��ü�� �����͸� �ܼ��� �б⸸ �ϴ� ����Լ��� ��� ����Լ��� �����ϴ� ���� ������ȣ ���鿡���� ����.

//���� 

class Const
{
	int x,y;
	
	public:
		void set(int x, int y)
		{
			this->x=x;
			this->y=y;
		}
		void print() const // �������Լ� 
		{
			//���� ���⿡ x=10;�� ������ ������ ���� ���� �� �� �ִ�.
			//�̰��� const�� Ư¡�̴�.
			cout<<"x: "<<x<<" y: "<<y<<endl;
		}
	
};

const int invariant = 6174; 

int main(void)
{
	//��� ��� ������ �̿� 
	//invariant=10;�̷������� �ٽ� �ʱ�ȭ�� �ϸ� ������ ����.
	//�̰� ���� cosnt�� Ư¡�̴�. 
	cout<<"invariant: "<<invariant<<endl; 
	
	//��� ��� �Լ��� �̿� 
	Const cc;
	cc.set(11,12);
	cc.print();
	return 0;
}

