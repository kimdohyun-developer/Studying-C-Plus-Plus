#include<iostream>
#include<string>

using namespace std;

int main()
{
	//string �޼ҵ�
	
	//length()�޼ҵ�� size()�޼ҵ�
	//length()�� ���ڿ��� ���̸� ��Ÿ������ size()�� �ش� string��ü�� �޸𸮿��� ������ ����ϰ� �ִ� ũ�⸦ ��Ÿ����.
	//���� �� �޼ҵ�� ���� �޼ҵ带 ��ȯ�Ѵ�.
	
	//���� 
	string str1;
	string str2 = "let's go party!";
	
	cout<<"str1�� ���ڿ� ����: "<<str1<<endl;
	cout<<"str2�� ���ڿ� ����: "<<str2;
	 
	//append()�޼ҵ�
	//�ϳ��� ���ڿ��� ���� �ٸ� ���ڿ��� �߰��ϴ� �޼ҵ� 
	//���� 
	//1. ���ڿ�.append(�߰��ҹ��ڿ�);                 // �߰��� ���ڿ��� �� ���� �߰���.
    //2. ���ڿ�.append(�߰��ҹ��ڿ�, ������ġ, ����); // �߰��� ���ڿ��� ���� ��ġ���� ������ŭ�� �� ���� �߰���.
	//3. ���ڿ�.append(����, �߰��ҹ���);             // �߰��� ���ڸ� ������ŭ �� ���� �߰���
    
    //����
    
    string str1, str2, str3;
    
    str1.append("let's go party!");
    str2.append("let's go party!",10,6);
    str3.append("4,X");
    
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3;
    
    //find()�޼ҵ� 
    //Ư�� ���ڿ��� ã��, �� ���� ��ġ�� ��ȯ�ϴ� �޼ҵ� 
    //����
	//1. ���ڿ�.find(ã�����ڿ�);           // �ε��� 0���� ã�� ���ڿ��� ã��, �� ���� ��ġ�� ��ȯ��.
    //2. ���ڿ�.find(ã������);             // �ε��� 0���� ã�� ���ڸ� ã��, �� ���� ��ġ�� ��ȯ��.
    //3. ���ڿ�.find(ã�����ڿ�, ������ġ); // ���� ��ġ���� ã�� ���ڿ��� ã��, �� ���� ��ġ�� ��ȯ��.
    //find()�޼ҵ�� �ش� ���ڿ����� ã�� ���ڿ��� ã�� ���ϸ�, string::size_type�� string::npos��� ����� ��ȯ�Ѵ�.
	
	//����
	
	string str = "let's go party!";
	
	cout<<str.find("par")<<endl;
	cout<<str.find('h')<<endl;
	
	if(str.find("par",10)!=string::npos)
	{
		cout<<"�ش� ���ڿ��� ã�ҽ��ϴ�.";
	}
	else
	{
		cout<<"�ش� ���ڿ��� ã�� ���߽��ϴ�.";
	 } 
	
	//compare()�޼ҵ� 
	//�� ���ڿ� ���� ������ ���ϴ� �޼ҵ� 
	//���� 
	//1. str1.compare(str_02) == 0 // str1�� str2�� ���� ���
	//2. str1.compare(str_02) < 0  // str1�� str2���� ���� ���������� �տ� ���� ���
	//3. str1.compare(str_02) > 0  // str1�� str2���� ���� ���������� �ڿ� ���� ���
    
    //���� 
    string str1 = "ABC";
    string str2 = "ABD";
    
    if(str1.compare(str2)==0)
    {
    	cout<<str1<<"��"<<str2<<"�� �����ϴ�.";
	}
	else if(str1.compare(str2)<0)
	{
		cout<<str1<<"��"<<str2<<"���� ���� ���� ������ �տ� �ֽ��ϴ�."
	}
	else  
	{
		cout<<str1<<"��"<<str2<<"���� ���� ���� ������ �ڿ� �ֽ��ϴ�."
	}
	
	//replace()�޼ҵ�
	//Ư�� ���ڿ��� ã��, �� ���ڿ��� �ٸ� ���ڿ��� ��ü�ϴ� �޼ҵ�.
	//���� 
	//���ڿ�.replace(��ü�ҹ��ڿ��ǽ�����ġ, ��ü�ҹ��ڿ��Ǳ���, ���ο�ڿ�);
    // ���޵� ���� ��ġ���� ���ڿ��� ���̸�ŭ�� ������ �Ŀ�, ���ο� ���ڿ��� ������.

    //���� 
    
    string str1 = "let's go funny party!";
    string str2 = "nice";
    string str3 = "awesome";
    
    string::size_type index = str1.find(str2);
    if(index!=string::npos)
    {
    	str1.replace(index,str2.length(),str3);
	}
	
	cout<<str1;
	
	//capacity()�޼ҵ�� max_size()�޼ҵ� 
	//capacity()�޼ҵ�� �ش� ���ڿ��� ����� ���� �ʰ� ������ �� �ִ� �ִ� ���ڿ��� ���̸� ��ȯ�Ѵ�.
	//max_size()�޼ҵ�� �ش� ���ڿ��� �ִ��� ���Թ����� ���� �� �ִ� �ִ� ���ڿ��� ���̸� ��ȯ�Ѵ�. 
    
    //���� 
	
	string str = "let's go party!";
	
	cout<<"str�� length: "<<str.length()<<endl;
	cout<<"str�� capacity: "<<str.capacity()<<endl;
	cout<<"str��max_size: "<<str.max_size(); 
	
}
