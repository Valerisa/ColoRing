#include <iostream>

const int ArSize = 20;
int main ()
{
  using namespace std;
  char name [ArSize];
  
  cout << "Proszę podać swoje imię:";
  cin >> name;
  cout << "Oto Toje imię, ustawione pionowo, jako kod ASCI:";
  int i = 0;
  while (name [i] != '\0')
  {
    cout << name [i] << ":" << int (name [i]) << endl;
    i++;
    return 0;
 }
