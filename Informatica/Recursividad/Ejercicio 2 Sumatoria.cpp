#include <iostream>
using namespace std;

int sumatoria (int num) {
	if(num == 1){
		cout<<1;
		return 1;
	}
	cout<<num<<"+";
	return num + sumatoria (num-1);
}
int main(int argc, char *argv[]) {
	
	int num = 0;
	
	cout<<"Suma de todos los naturales anteriores\n";
	cout<<"Ingrese un número: ";
	cin>>num;
	
	cout<<"="<<sumatoria(num);
	return 0;
}

