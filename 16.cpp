#include<iostream>

using namespace std;

//�Լ�
//�ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� �������� �����Ѵ�.
//C++���� �Լ��� Ư���۾��� ĸ��ȭ �ϴ� �� �����ϰ� ���ȴ�.

//�Լ��� ����
//1. �ݺ����� ���α׷����� ���� �� �ִ�.
//2. ���α׷��� �������� �Լ��� ������ �ۼ��ϸ� ���ȭ�� ���� ��ü���� �ڵ��� �������� ��������.
//3. ������ �߻��ϰų� ����� ������ �ʿ��� �� ���������� ����.
//4. �Լ��� ũ�⿡ ���� ���õ� ��Ģ�� ���� �뷫 �ϳ��� ����� �ϳ��� �Լ��� ����� ���� �����ϴ�.

//����
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
 //�Լ��� ������ ��ȯŸ��-�Լ��̸�(����)���� �����Ѵ�.
 //�׸��� ���ο� �����θ� �ۼ��Ѵ�. 
 
int main(void)
{
	int result;
	
	result=SmallNum(5,7);
	cout<<result;
}