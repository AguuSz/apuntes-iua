#include <iostream>
using namespace std;

int fibonacci (int num) {
	if (num == 1) {
		return 1;
	}
	if (num == 0) {
		return 0;
	}
	return fibonacci (num-1) + fibonacci (num - 2);
}
int main(int argc, char *argv[]) {
	int num;
	
	cout<<"Fibonacci\n\n";
	cout<<"Ingresa un numero: ";
	cin>>num;
	
	cout<<"="<<fibonacci(num);
	return 0;
}

