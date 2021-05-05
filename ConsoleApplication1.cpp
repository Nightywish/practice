
#include <iostream>

using namespace std;


int main()
{
  
	cout << " the size of an int is: " << sizeof(int) <<  " bytes"  <<endl;


	cout << " the size of an int is: " << sizeof(long) << " bytes" << endl;
	string name;
	cout << "what is your name?" <<endl;
	cin >> name;
	cout << "hello  " << name << "." << endl;
	cout << "what is your favorite game?" << endl;
	cin >> name;
	cout << "That's wonderful game, i like to play " << name << " too" << endl;



	int line1[] = { 1,0,0 };
	int line2[] = { 0,1,0 };
	int line3[] = { 0,0,1 };

	int* pLine[3] = { line1,line2,line3 };
	cout << "Matrix test:" << endl;
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
			cout << pLine[i][j] << "";
		cout << endl;


	}



	return 0;


}
