#include<iostream>

using namespace std;

//������(reference)
//ũ�Ⱑ ū ����ü�� ���� �����͸� �Լ��� �μ��� ������ ��쿡 ����Ѵ�.
//���� C++�� Ŭ����(class)�� ������ ������ ���� ���ȴ�.

//�������� ����-�� 
//int �����̸�; //������ ���� 
//int& �������̸� = �����̸�; //������ ���� 
//�̶� &�����ڴ� �ּҿ����ڰ� �ƴ� Ÿ���� �ĺ��ϱ� ���� ����ϴ� �ĺ��ڷ� ���� ���̴�.
//��, (Ÿ��)&�� (Ÿ��)�� ������ ���� ������ �ǹ��Ѵ�. 
//�̷��� ����� �����ڴ� ��� ������ ���� �޸� ��ġ�� �����ϰ� �ȴ�.

//�����ڸ� �����Ҷ� �����ؾ��� �� 
//1. �������� Ÿ���� ����� �Ǵ� ������ Ÿ�԰� ��ġ�ؾ� �մϴ�.
//2. �����ڴ� ����� ���ÿ� �ʱ�ȭ�Ǿ�� �մϴ�.
//3. �����ڴ� �� �� �ʱ�ȭ�Ǹ�, �����ϴ� ����� ������ �� �����ϴ�.

//���� 
int main()
{
	int x =10; //������ ���� 
	int &y = x; //������ ���� 
	
	cout<<"x: "<<x<<"y: "<<y<<endl;
	y++; //�����ڸ� �̿��� ��������. 
	cout<<"x: "<<x<<"y: "<<y<<endl;
	cout<<"x�� �ּҰ�: "<<&x<<"y�� �ּҰ�: "<<&y<<endl; //�ּҰ��� ��� 
}

//�����ڸ� �̿��� ���������� �����ϸ�, ���� �����Ӹ� �ƴ϶� ��� ������ ���� ������� �� �� ����.
 