#include<iostream>
#include<string> 
using namespace std;

int main(void)
{
	//���ڿ�(string) 
	//�޸��� ����� �Ϸ��� ���ӵ� ���ڵ��� ���� 
	//�������
	//1. C��� ��Ÿ���� ���ڿ�-�迭���.
	//2. stringŬ������ �̿��� ���ڿ�.
	
	//C��� ��Ÿ���� ���ڿ� 
	//C++������ ū����ǥ("")�� ����� ǥ���Ǵ� ���ڿ��� ���ڿ� ������ �Ѵ�.
	//������ �ϴ� ������ �ش� ���ڿ��� �̸��� ������ ���� �ʰ� ���ڿ��� ���뵵 ������ �� ���� �����̴�.
	
	//������ �迭�� ����� ���ڿ� ����
	
	const int SIZE = 20;
	char address[SIZE];
    char name[SIZE];
    
    cout<<"�̸��� �Է��ϼ���: ";
	cin>>name;
	cout<<"�ּҸ� �Է��ϼ���: ";
	cin>>address;
	
	cout<<"�̸�: "<<name<<" �ּ�: "<<address; 
	//���⸦ ����ϸ� ���ڿ��� ���� �ٴ� �Ͱ� ���ڰ� 20���� ������ ���α׷��� ����Ǵ� ���� ������ �����. 
	
	//���� �������� ���⸦ ������ ���ڿ��� �Է¹޴� ���-get()�� ��� 
	const int SIZE = 20;
	char address[SIZE];
    char name[SIZE];
    
    cout<<"�̸��� �Է��ϼ���: ";
	cin.get(name,SIZE).get(); 
	cout<<"�ּҸ� �Է��ϼ���: ";
	cin.get(address,SIZE).get(); 
	
	cout<<"�̸�: "<<name<<" �ּ�: "<<address;
	
	//���� �������� ���ڰ� 20���� �ʰ����� �� ���α׷��� ����Ǵ� ������ ����-ignore()�� ��� 
	const int SIZE = 20;
	char address[SIZE];
    char name[SIZE];
    
    cout<<"�̸��� �Է��ϼ���: ";
	cin.get(name,SIZE).ignore(SIZE,'\n'); 
	cout<<"�ּҸ� �Է��ϼ���: ";
	cin.get(address,SIZE).ignore(SIZE,'\n'); 
	
	cout<<"�̸�: "<<name<<" �ּ�: "<<address; 
	
	//stringŬ������ �̿��� ���ڿ� - #include<string>�� ����Ѵ�.
	 
	string address, name; //stringŬ������ ��� 
	
	cout<<"�̸��� �Է��ϼ���: ";
	getline(cin,name); //stringŬ������ ���� getline�Լ��� �̿�. 
	cout<<"�ּҸ� �Է��ϼ���: ";
	getline(cin,address); 
	
	cout<<"�̸�: "<<name<<" �ּ�: "<<address;
	
	return 0; // int main(void)�ϱ� return 0;�� ����. 
}
