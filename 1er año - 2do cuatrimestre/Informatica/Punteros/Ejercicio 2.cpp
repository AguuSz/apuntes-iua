#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	char abc[27] = {"abcdefghijklmnopqrstuvwxyz"};
	char ABC[27] = {0};	
	
	for(int i = 0; i < 26; i++){
		ABC[i] = toupper(abc[i]);
	}
	
	char *punterolow = abc;
	char *punteroup = ABC;

	cout<<punterolow<<"\t"<<punteroup<<endl;

	return 0;
}

