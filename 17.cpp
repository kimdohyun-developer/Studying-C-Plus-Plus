#include<iostream>

using namespace std;

//�̹����� �Լ��� ���κ��� �ڿ� ���� ���� ��� �ؾ��ϴ� �� �˾ƺ���.
//�Լ��� ���κ��� �ڿ� �θ� �������� �Ҷ� ������ ���� �б⶧���� ������ �߻��Ѵ�.
//�׷��� �Լ��� ���� ������ ���� �̸� �����Ѵ�. 
//�Լ��� ���� ������ ����
//��ȯŸ�� SmallNum(�Ű��������);

//����-�Լ��� �������� 

int SmallNum(int, int); //�Լ��� �������� 
//�����Լ��տ� �̸� ����Ǿ���Ѵ�. 
int main(void)
{
	int result;
	
	result=SmallNum(5,7);
	cout<<result;
 } 
 
 int SmallNum(int num1, int num2) //�� ���� ���� �Ǻ��ϴ� �Լ�. 
{ 
	if(num1<=num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
} 
