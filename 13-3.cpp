//13-2�� ������  const�� �Լ��� ������ ����. 
#include<iostream>

using namespace std;


struct Prop 
{
	int savings;
	int loan;
};

Prop initProperty(void); 
int CalcProperty(const Prop*);  //const �߰�  

int main(void)
{
	int kim_prop;
    Prop kim = initProperty(); //initProperty()�Լ��� Prop�� Ÿ���̴ϱ� �װ��� �Ҵ��Ϸ��� ������ Prop�� Ÿ���̿�����. 
	kim_prop = CalcProperty(&kim); 
	
	cout<<"kim�� ���-����: "<<kim.savings<<" ����: "<<kim.loan
	<<"������ ������ �� ���: "<<kim_prop;
	return 0; 
}

Prop initProperty(void)
{
   	Prop kim_prop = {100000000,40000};
   	return kim_prop; //����ü�� �Լ��� ��ȯ������ ��ȯ��. 
}

int CalcProperty(const Prop*money) //const �߰� 
{
	//money->savings = 100; //const�� ��� ������ �� �ڵ�� ȿ���� ����. 
	//Plus- const�� �ִ� �� �Լ��ȿ� �μ��� �����ϴ� �ڵ带 ���� �����Ϸ����� ������ �߻��Ѵ�. 
	return (money->savings-money->loan); 
} 


//const�� �߰��ϹǷν� �Լ������� �μ��� ���� �ٲ� �� ����.
//������ȣ�� ȿ����. 
 
 
