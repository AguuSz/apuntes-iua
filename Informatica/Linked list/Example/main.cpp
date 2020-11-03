#include <iostream>
#include "Node.h"
#include "LinkedList.h"

using namespace std;
int main() {

    LinkedList ll;




    try{
        ll.insert(0,5);
        ll.insert(1,24);
        ll.insert(1,4);
        ll.insert(2,8);
        ll.insert(1,7);
    } catch (...) {
        cout<<"Error"<<endl;
    }

    cout << ll.get(2) << endl;
    return 0;
}
