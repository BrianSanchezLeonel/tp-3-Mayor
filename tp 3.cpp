#include<bits/stdc++.h>
using namespace std;
int EsMayor(int a,int b,int c);
int main(){
	int a,b,c;
	cout<<"Ingrese un numero:"<<endl;
	cin>>a;
	cout<<"Ingrese otro numero:"<<endl;
	cin>>b;
	cout<<"Ingrese un numero mas:"<<endl;
	cin>>c;
	int m=EsMayor(a,b,c);
	cout<<"El mayor es:"<<m<<endl;
	return 0;
}
int EsMayor(int a,int b,int c){
	int mayor;
	if(a>b && a>c){
		mayor=a;
	}
	if(b>a && b>c){
		mayor=b;
	}
	if(c>a && c>b){
		mayor=c;
	}
	return mayor;
}