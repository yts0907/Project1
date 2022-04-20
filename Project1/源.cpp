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
				cout << "猜测过大" << endl;
			}
			else if (val < num)

			{
				cout << "猜测过小" << endl;
			}
			else
			{
				cout << "猜对了" << endl;
				break;
			}

		}
		while (a >= 5)
		{
			cout << "您失败了";
			break;
		}
	
	
	
	
	
		
	
	system("pause");
	return 0;
}
