#include<iostream>

using namespace std;

//�Լ� �����ε�(function overloading)
//���� �̸��� �Լ��� �ߺ��Ͽ� �����ϴ� ��.
//���� ���� ó���ϴ� �Լ��� �Ű������� ������ ���ݾ� �޸��Ͽ�, �ϳ��� �̸����� �ۼ��� �� �ְ� ���ִ��� ���̴�.

//�Լ� �ñ״�ó(function signiture)
//�Լ��� ������ ��õǴ� �Ű����� ����Ʈ
//��- �� �Լ��� �Ű������� ������ �� Ÿ���� ��� ���Ƹ�, �� ���Լ��� �ñ״�ó�� ���ٰ� �� �� �ִ�.
//��, �Լ��� �����ε��� ���� �ٸ� �ñ״�ó�� ���� �����Լ��� ���� �̸����� �����ϴ� ���̴�. 

void Work(const char* str, int n)
{
	for(int i =0; i<n; i++)
	{
		cout<<str<<endl;
	}
} 

void Work(const char*str1, const char*str2)
{
	cout<<str1<<str2<<endl;
}

void Work(int x, int y)
{
	cout<<x*y<<endl;
}

void Work(double x, double y)
{
	cout<<x/y<<endl;
}

//��ɵ� �ٸ��� �Ű������� �ٸ����� �̸��� ���� �Լ����� ������ �������.
//�̰��� �����ε�!!.

int main(void)
{
  	Work("Let's go party!",3);
	Work("friday night","is burning!!");
	Work(5,4);
	Work(6.3,2.1);
	return 0;
}

//Plus++
//�����ε����� �Ű������� ���� ���� ��ȣ�ϸ� ������ ����.
//���� ��� �� �������� double���� �Ű������� �Ϳ� �ϳ��� double�� ��, �� �ٸ��ϳ��� int�� ���� ���� 
//��ȣ�� ȣ���� �ȴ�. �׷��Ƿ� ������ �߻���Ų��. 
//��
//Work(6.3,3); //�̷������� ������ �ȵȴٴ� �Ŵ�. 
