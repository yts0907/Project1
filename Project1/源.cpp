#include<iostream>
using namespace std;
#include<ctime> 

int main()

{
	
	srand((unsigned int)time(NULL));
	int num = (rand() % 100 + 1);
	cout << num<<endl;
	int val = 0;
	int a = 0;
	
	
	
		while (a<5)
		{
			a++;


			cin >> val;
			if (val > num)
			{
				cout << "�²����" << endl;
			}
			else if (val < num)

			{
				cout << "�²��С" << endl;
			}
			else
			{
				cout << "�¶���" << endl;
				break;
			}

		}
		while (a >= 5)
		{
			cout << "��ʧ����";
			break;
		}
	
	
	
	
	
		
	
	system("pause");
	return 0;
}
