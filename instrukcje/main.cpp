#include<iostream>

using namespace std;
int main(){
	int wys, punktyKarne;

	cout<<"Na jakiej wysokosci lecimy? [w metrach]: ";
	cin>>wys;

	if(wys < 500){
	cout<<"\n"<<wys<<"metrow to za nisko"<<endl;
	punktyKarne= 1;
	}else{
	cout<<"/nNa wysokosci"<<wys<<" metrow jestes bezpieczny"<<endl;
	punktyKarne= 0;
	}

	cout<<"Masz "<<punktyKarne<<" punktow karnych"<<endl;
	if(punktyKarne)cout<<"Popraw sie!"<<endl;

	return 0;
}
