#include <iostream>
using namespace std;

int main()
{
	int firNum, secNum;
	char mathOp;
	bool repeat = true;
	char question = 'y';

	while(repeat){;

	cout << "Enter your first number " << endl;
	cin >> firNum;

	cout << "Enter your second number " << endl;
	cin >> secNum;

	cout << "Do you want to + or *?" << endl;
	cin >> mathOp;

	switch(mathOp)	
		{
		case'+':
		cout << "Your result is " << firNum + secNum << endl;
		break;

		case'*':
		cout << "Your result is " << firNum + secNum << endl;
		break;

		}
	cout << "Go again? Enter y or n" << endl;
	cin >> question;

		if(question != 'y') {repeat = false;}
		}
		
	return 0;
}