#include<iostream>

using namespace std;
//������ ���� ����(call by reference)
//������ ���� �����ϴ� ���� �ƴ�, ���� �����͸� ���� �����ϴ� ���̴�.
//C����� �����͸� ����ؼ� �ּҰ��� ���������� 
//C++������ �̷��� �۾��� ������(&)�� ����Ͽ� ������ �� �ִ�. 

//����

void Local(int&); //�Լ��� ���� ����-�����ڸ� �����. 
 
int main(void)
{
	int f = 10;
	cout<<"f�� �ʱⰪ: "<<f<<endl;
	
	Local(f); //�Լ���� 
    cout<<"f�� �Լ���: "<<f;
    return 0; 
}

void Local(int& num) //����� �����Լ�. 
{
	num+=10;
}

//Local�Լ��� �Ű����� num�� �μ��� ���� f�� ������ ���޹޴´�.
//���� �Լ� ������ ������ num�� ���� �����ϸ� ���� �μ��� ����f�� ���� ���� ����ȴ�.

//Plus
//main�Լ��� �μ� ����. 
//main�Լ��� �Լ��⶧���� �μ��� ���� ���� ���� �ְ� ��ȯ���� ���� ���� �ִ�.
//�̷�������
//void(�Ǵ� int) main(int argc,char *argv[]); //main�Լ��� ���� 
