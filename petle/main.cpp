#include<iostream>

using namespace std;
int main(){
	int ile;
	cout<<"Ile gwiazdek ma mieć kapitan?";
	cin>>ile;
	cout<<"\nNo to narysujmy wszystkie"<<ile<<":";
	while(ile){
		cout<<"*";
		ile--;
	}
	cout<<"\nTeraz zmienna ile ma wartosc "<<ile<<endl;
}
