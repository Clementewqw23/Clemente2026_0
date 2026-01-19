#include <iostream>

using namespace std;
int main(){

    cout<< "Ingrese dos valores";
int a1, a2;
cin>> a1;
cin>> a2;
if (a1<a2){
    cout<<"el mayor es:" << a2;
    cout<<"el menor es:" << a1;
}
if (a1>a2){
    cout<<"el mayor es:" << a1;
    cout<<"el menor es:" << a2;
}
return 0;
}