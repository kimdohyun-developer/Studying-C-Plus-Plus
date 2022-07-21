#include<iostream>

using namespace std;

//������ Ŭ����(friend class)
//���� �� Ŭ������ ��ɻ����� ���� ������ ���迡 �ְ�, ������ private����� �����ؾ߸� �Ѵٸ� Ŭ���� ��ü�� ������� �����ϴ� ���� ����.
//������ Ŭ������ �ش� Ŭ������ ��� ��������� Ư�� Ŭ������ �������� Ŭ������ �ǹ��մϴ�.

//����
//friend class Ŭ�����̸�; 

//����

class A
{
	private:	
	    int a1;
	    int a2;
	    friend class B; //������ Ŭ������ �����Ѵ�. 
	public:
		A(int a1, int a2)
		{
			this->a1 = a1;
			this->a2 = a2;
		}
};

class B
{
	public:
		void info_A(A aa) //���� ������ Ŭ������ �����߱� ������ �ٸ� Ŭ������ private��������� ������ �� �ִ�. 
		{
			cout<<"a1: "<<aa.a1<<" a2: "<<aa.a2;
		}
};

int main(void)
{
	A aa(150,320);
	B bb;
	bb.info_A(aa);
} 
