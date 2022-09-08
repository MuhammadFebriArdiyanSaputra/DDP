#include <iostream>
using namespace std;
int main(){
	string akt,jrs;
	cin >> akt;
	cin.ignore();
	getline(cin,jrs);
	cout << akt << endl << jrs;
	return 0;
}
