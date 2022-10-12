#include <iostream>
using namespace std;

int main() {
	int bil;
	
	cout << " Masukan Bilangan : ";
	cin >> bil;
	
	if(bil%2==0){
		cout << " Bilangan Genap." <<endl;
	}else {
		cout << " Bilangan Ganjil. " <<endl;
	}
}

