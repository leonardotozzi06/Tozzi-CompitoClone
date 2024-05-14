/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

Leonardo Tozzi 14/05/2024
*/

# include <iostream>
using namespace std;
int main()
{
  int i ,n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  for(i=0; i<=n; i++){
    cout<<"Bada come la fuma";
  }
  system("pause");
}
