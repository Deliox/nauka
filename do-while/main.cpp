#include<iostream>
using namespace std;
int main(){
	char litera;
	do{
		cout<<"Napisz litere";
		cin>>litera;
		cout<<"napisales "<<litera<<endl;
	}while(litera!= 'K' && litera!= 'k');
	cout<<"Skoro napisales k to konczymy";
}
