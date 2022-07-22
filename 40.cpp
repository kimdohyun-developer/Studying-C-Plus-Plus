#include<iostream>
#include<string> 
using namespace std;

//������ ��� �Լ�(friend member function) 
//�ش�Ŭ������ ��� ��� �Լ��� Ư�� Ŭ������ �����尡 �ȴ�.
//������ ��� �Լ��� ���� Ư�� Ŭ������ ������ ������ �ʿ� ���� ��� �Լ��� �ִ�.

//������ ����Լ��� �ش� Ŭ������ Ư�� ��� �Լ����� ������� �����ϴ� ���̴�.
//�̰��� ������ ������ �� �ʿ��� �Լ��� ���ؼ��� ������ ����ϹǷ�, ��������(data hiding)�� ĸ��ȭ(encapsulation)���信 ���� ������ ������ �� �ְ� �ȴ�.

//����

class Name
{
	private:
		string name;
		
	public:
		getName(string a)
		{
			name = a;
		}
		friend void nameInfo(Name a); //����Ʈ ��� �Լ� ���� 
};

void nameInfo(Name a)
{
	cout<<"�̸�: "<<a.name;
 } 
 
int main(void)
{
	Name nn;
	nn.getName("ȫ�浿");
	nameInfo(nn); //nameInfo�Լ��� Ŭ������ ���ԵǾ����� �ʴ��� Ŭ������ ���� �� �� �ֵ�. 
	return 0;     //Ŭ���� ���ο� ��ü�� �����ϰ� ����ϴ� �� �ƴϱ� ������ nn.nameInfo��� ���� �ʴ´�. 
}
