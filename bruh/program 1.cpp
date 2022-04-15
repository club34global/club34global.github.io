#include <iostream>
#include<cstdlib>
#include <math.h>
#include<time.h>
#include <ctime>
#include<string>
using namespace std;

void czys2(int l){
	
	int b, x=0, r;
	float a;
	for( b=1  ; b<l  ; b++){
		
		a=(l-b)/(b+1);
		r=(l-b)%(b+1);
		
		if(r==0){
			x++;
			cout<<"b="<<b<<";   a="<<a<<";  r="<<r<<endl;
		}
		
	}
	if(x>0){
		cout<<"stabilna";
	}
	else{
		cout<<"niestabilna";
	}
	

}

double czys(int l){
	int b, x=0, r;
	float a;
	for( b=1  ; b<l  ; b++){
		
		a=(l-b)/(b+1);
		r=(l-b)%(b+1);
		
		if(r==0){
			x++;
		}
		
	}
	if(x>0){
		return 1;
	}
	else{
		return 0;
	}
}

void wyps(int z){
	int n;
		for (n=1 ; n<z ; n++){
			cout<<n<<" - "<<czys(n);
			
			cout<<endl;
		}
	
}

double b1(int l){
	int b, r, a;
	if(czys(l)==0){
	return 0;	
	}
	
	for( b=1  ; b<l  ; b++){
		
		a=(l-b)/(b+1);
		r=(l-b)%(b+1);
		
		if(r==0){
			return b;
		}
		
	}
	
}

double a1(int l, int b){
	int a;
	a=((l-b)/(b+1));
	return a;
}

long long stab(int l){
	if(czys(l)==0){
	cout<<0<<endl;

		
	} 
	else{
	int t[l+10], x=1, i, n, j;
	
	for ( j=0 ; j<(l+10) ; j++ ){
		t[j]=0;
	}
	
	t[0]=b1(l);
	t[1]=a1(l, t[0]);
	
	
	for ( i=0 ; i<(l+10) ; i++ ){
		if(czys(t[i])==1&&t[i]!=0){
			n=t[i];
			t[x+1]=b1(n);
			t[x+2]=a1(n, b1(n));
			t[i]=0;
			x+=2;
	
		}
	}
	for ( j=0 ; j<(l+10) ; j++ ){
		if(t[j]!=0){
			cout<<t[j]<<", ";
		}
	}
	cout<<endl;
	
	
	
	
}
}

double wypns(int z){
	int i;
	for ( i=0 ; i<=z ; i++){
		if(czys(i)==0){
			cout<<i<<endl;
		}
		else{
			cout<<"     "<<i<<endl;
		}
	}
}

double wstab(int z){
	for( int i=1 ; i<=z ; i++){
		if(czys(i)==1){
			cout<<"stab "<<i<<" - ";
			stab(i);
		}
		else{
			cout<<"stab "<<i<<" - 0"<<endl; 
		}
	}
}





int main(){
	int w, l, z, j;
	for( j=0 ; j<101 ; j++){
	cout<<endl<<"1 - sprawdza czy liczba jest stabilna."<<endl;
	cout<<"2 - wypisuje liczby i okreœla stabilnosc."<<endl;
	cout<<"3 - sprawdza czy liczba jest stabilna wypisuje 1 lub 0."<<endl;
	cout<<"4 - stab."<<endl;
	cout<<"5 - podziel na stabilne i nie"<<endl;
	cout<<"6 - wpisz stabilizacje kolejnych liczb."<<endl;
	cin>>w;
	if(w==1){
		cout<<"l=";
		cin>>l;
		czys2(l);
	}
	if(w==2){
		cout<<"z=";
		cin>>z;
		wyps(z);
	}
	if(w==3){
		cout<<"l=";
		cin>>l;
		cout<<czys(l);
	}
	if(w==4){
		cout<<"l=";
		cin>>l;
		stab(l);
	}
	if(w==5){
		cout<<"z=";
		cin>>z;
		wypns(z);
	}
	if(w==6){
		cout<<"z=";
		cin>>z;
		wstab(z);
	}
}
		
		
	

return 0;
	}

