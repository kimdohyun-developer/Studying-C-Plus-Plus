#include<iostream>

using namespace std;

int main()
{
	//�޸��� �����Ҵ�(dynamic allocation)
	//��Ÿ�ӿ� �޸𸮸� �Ҵ�޴� ��.
	//C++������ new�����ڿ� delete�����ڸ� ���� c���� �� ȿ������ ����� �����Ѵ�.
	
	//new������
	//���� - Ÿ��* �������̸� = new Ÿ��;
	//ù��° Ÿ���� �����Ϳ� �´� �����͸� �����ϱ� ����
	//�ι��� Ÿ���� �޸��� ������ �����ϱ� ���� ����Ѵ�.
	//���� ����� �� �ִ� �޸𸮰� �����Ͽ� ���ο� �޸𸮸� �������� ���Ѵٸ�.
	//new�����ڴ� �� ������(null pointer)�� ��ȯ�Ѵ�.
	
	//delete������ 
	//���� ������� �ʴ� �޸𸮸� �ٽ� �޸� ������ �����ش�. 
	// ����- delete �������̸�;
	
	//���� 
	int*ptr_int = new int;
	*ptr_int = 100;
	
	double*ptr_double = new double;
	*ptr_double = 100.123;
	
	cout<<"int�� ���ڰ��� "<<*ptr_int<<"�Դϴ�."<<endl;
	cout<<"int�� ������ �޸� �ּҴ� "<<ptr_int<<"�Դϴ�."<<endl;
	cout<<"double���� ���ڰ��� "<<*ptr_double<<"�Դϴ�."<<endl;
	cout<<"double���� ������ �޸� �ּҴ� "<<ptr_double<<"�Դϴ�."<<endl;
	
	delete ptr_int;
	delete ptr_double; 
	
	//delete�����ڴ� �ݵ�� new�����ڸ� ���� �Ҵ�� �޸𸮸� ������ ������ ����ؾ��Ѵ�.
	//����, �ѹ� ������ �޸𸮸� �ٽ� �����Ϸ��� �õ��ϸ� ������ �߻��Ѵ�. 
	 
}
