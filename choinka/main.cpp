#include<iostream>

using namespace std;
int main(){
	int i, m;
	int i2= 1;
    int spaces=  10;
    int space;

	for(i= 0;i<8;i++){
        for(space= 0;space<= spaces;space++){
            cout<<" ";
        }
        for(m= 0;m<i2;m++){
            cout<<"*";
        }
        cout<<endl;
        spaces-=  1;
        i2+= 2;
	}
	for(i= 0;i<=1;i++){
        for(spaces= 0;spaces<=9;spaces++){
            cout<<" ";
        }
        cout<<"**"<<endl;
	}
}
