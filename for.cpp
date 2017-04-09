#include <iostream>

int main (void)
{
	using namespace std;

	int i;
	
/*	for (i = 0; i < 5; i++)
	{	
		cout << "Cześć!" << endl;
		cout << "Pa Pa!" << endl;
	}
*/
//	for (i = 0; i < 5; i++)
//		cout << "Cześć!"<< endl << "Pa Pa!" << endl;

	i = 0;

	for ( ; i < 5; )
	{
		cout << "Hejka" << endl;
		i++;
	}

	return 0;
}
