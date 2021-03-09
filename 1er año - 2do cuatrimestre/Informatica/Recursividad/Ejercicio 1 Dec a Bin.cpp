#include <iostream>
using namespace std;

void binario (int num) {
	if(num > 1){ 
		binario (num / 2);
	}
	cout<<(num%2);
}
int main(int argc, char *argv[]) {
	
	int num = 0;
	
	cout<<"De decimal a binario\n";
	cout<<"Ingrese un número: ";
	cin>>num;
	
	binario (num);
	return 0;
}

