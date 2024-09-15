#include <iostream>
#include <vector>
#include "Kolo.h"

using namespace std;

int main() {
Kolo<double> k(5);

    k.push_back(3.3);
    k.push_back(6);
    k.push_back(7);
    k.push_back(9);
    k.push_back(8);
    k.push_back(11);
k.show();

   k.popfront();
   k.popfront();
k.show();
k.push_back(1);
k.push_back(2);
k.show();
k.popfront();
k.show();
cout<<"test__________________"<<endl;
    k.popfront();
    k.show();
    k.popfront();
    k.popfront();
    k.popfront();
    k.popfront();
    k.push_back(1);
    k.push_back(2);
    k.popfront();
    k.show();
cout<<k.firstElement()<<endl;
k.push_back(3);
k.popfront();
    k.popfront();
    cout<<k.firstElement()<<endl;








//    cout<<k.bufor[0]<<endl;
//    cout<<k.bufor[1]<<endl;


    return 0;
}
