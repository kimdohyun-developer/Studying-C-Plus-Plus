#include<iostream>
#include<string>
 
using namespace std;

int main()
{
	//string�� ����� �ʱ�ȭ 
	//string�� �ϳ��� Ÿ��ó�� ����Ͽ� ���ڿ��� �����ϰ� �ʱ�ȭ �� �� �ִ�.
	
	//���� 
	string s1; //���ڿ��� ����. 
	s1="programming"; //�ʱ�ȭ. 
	string s2 = "let's go party!!"; //���ڿ��� ����� �ʱ�ȭ�� ���ÿ�. 
	
	cout<<s1<<endl;
	cout<<s2;
	
	//���ڿ��� ����ϸ� �������� ���̸� �ڵ����� �������ְ� ������ �迭���� �� ���ϴ�.
	//���ڿ��� �迭ó�� index([i]�̷���)�� ���� �ٷ� �� ���� 
	
	//���� 
	string car;
	cout<<"car������ ����: "<<car.length()<<endl; //length()���� size()�ε� ���̸� �� �� �ִ�.  
	
	car = "palisade";
	
	cout<<"car�̸�: "<<car<<endl; 
	cout<<"car������ ����: "<<car.length()<<endl;
	cout<<"car�̸��� ù��° ����: "<<car[0]; //�ε����� �Ἥ �迭ó�� �ٷ� �� �ִ�.  
	//�ѱ��� �ƽ�Ű�ڵ尡 �ƴ� �����ڵ��̱� ������ 2��Ʈ�� ���. 
	
	//���ڿ� ó�� 
	//���ڿ��� +,=�� ����ؼ� �����ϰų� ��ĥ �� �ִ�.
	
	//����-���� ���� 
	string str1 = "friday night!";
	string str2;
	
	str2 = str1; //���ڿ� ���� ���� 
	cout<< str2; 
	
	//����- ���� ����� �߰� ���� 
	string str3 = "friday night";
	string str4 = "is burning!";
	string str5;
	
	str5=str3+str4;//���ڿ� ���� ���� 
	cout<< str5<<endl;
	
	str3+=str4; //���ڿ� �߰� ���� 
	cout<<str3;
	
	//���ڿ� �����
	//���ڿ� �Է¿��� cin, ��¿��� cout�� ����� �� ������
	//cin�� �̿��� ���ڿ��� �Է��� �Ѵܾ� ������ ����Ǳ� ������ 
	//���ڿ��� �� ��(line)�� �а� ���� ������ getline()�Լ��� ����Ѵ�.
	
	//���� 
	
	string name, score;
	
	cout<<"�̸�: ";
	getline(cin,name); 
	cout<<"���(����): ";
	getline(cin,score);
	
	cout<<"�̸�: "<<name<<"����: "<<score; 
		
}
