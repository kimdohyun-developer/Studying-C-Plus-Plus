#include<iostream>
#include<string>

using namespace std;

//����ü�� ����
//C++���� �����ڴ� �ַ� ����ü�� ���� ����� ���� Ÿ���� �ٷ� �� �����ϰ� ���ȴ�.
//����ü�� �����ϴ� ����� ������ �����ϴ� ����� ����.

//���� 
 
 struct Car
 {
 	string carName;
	string carOwner;
	int price; 
 };
 
void Display(const Car&); //�Լ��� ���� ���� 
 
int main(void)
{
	Car myCar={"�غ���","��",100000};
	Display(myCar);
	return 0;
} 

void Display(const Car& cc) //�����ڸ� ����  �����͸� ������ �� 
{
	cout<<"carName: "<<cc.carName<<endl;
	cout<<"carOwner: "<<cc.carOwner<<endl;
	cout<<"price: "<<cc.price;
}

//���� ����ó�� �Լ� ���ο��� ����ü�� ���� ������ �ʿ䰡 ���� ���� const�� ����Ͽ� ��ʺ� ����ü�� ���� ������ ������� �ʴ� ���� ����. 
