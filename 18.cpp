#include<iostream>

using namespace std;

//�μ� ���� 
//�Լ��� ȣ���� ������ �Լ��� �ʿ��� �����͸� �������� �� �ִ�. 
//�μ� ���� ��� 
//1. ���� ���� ����(call by value)
//2. ������ ���� ����(call by reference) 

//���� ���� ����
//������ ������ �ִ� ���� �Լ��� �Ű������� �����ϴ� ����̴�.
//�� ����� ���� ������ �Ű������� ������ ������ �Ǳ� ������ �Ű������� ���� ��� �ٲ� ������ ����  ������ �ʴ´�. 
//����

void Local(int); //�Լ��� ���� ���� 

int main(void)
{
	int f = 10;
	cout<<"f�� �ʱⰪ: "<<f<<endl;
	
	Local(f); //�Լ���� 
    cout<<"f�� �Լ���: "<<f;
    return 0; 
}

void Local(int num) //����� �����Լ�. 
{
	num+=10;
}

//Local �Լ��� �Ű����� num�� f�� ���� ���� �޴´�.
//���� �Լ� ������ �Ű����� num�� ���� �ƹ��� �����ϴ��� ���� �μ��� ���޵� ����f�� ���� ���� ������� �ʴ´�. 