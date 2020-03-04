#include<iostream>
using namespace std;
int main(){
	cout<<"Kapitanie ktory podzespol sprawdzic"
	    <<"nr 10\nnr 35\nnr 28\n"
	    <<"Podj numer ";
	int ktory;
	cin>>ktory;
	switch(ktory){
	case 10: cout<<"sprawdzam silnik";break;
	case 28: cout<<"sprawdzam radar";break;
	case 35: cout<<"sprawdzam stery";break;
	default: cout<<"Zazdales nr "<<ktory<<" nie ma takiego";break;
	}
}
