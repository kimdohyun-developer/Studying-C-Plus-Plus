#include<iostream>
#include<string>
using namespace std;

//��ø�� ����ü
//����ü�� �����ҋ� ����ü �ȿ� ��������� �� �ٸ� ����ü�� ������ �� �ִ�.

//���� 

struct info
{
	string name;
	int stuId;
};

struct student
{
    info stu_Info; //�̷� ������ �Ǵٸ� ����ü�� �����ϴ� ��������� ��ø��ų �� �ִ�. 
	string address;
	string department;
};

//����ü�� ũ��
//����ü�� ũ��� ����������� ũ�⿡ ���� �����ȴ�.
//������ ����ü�� ũ�Ⱑ ������ ����������� ũ�� ���հ� ��ġ�ϴ� ���� �ƴϴ�. 

//���� 

struct TypeSize
{
	char a;
	int b;
	double c;
};
 
int main(void)
{
	cout<<"����������� ũ�� - a: "<<sizeof(char)<<" -b: "<<sizeof(int)<<" -c: "<<sizeof(double)<<endl;
	cout<<"����ü�� ũ��: "<<sizeof(TypeSize);
	return 0;
}
