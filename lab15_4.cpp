#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d)
{
	int op[]={a,b,c,d};
	for(int i=3;i>0;i--)
	{
		int j=rand()%(i+1);
		int x=op[i];
		op[i]=op[j];
		op[j]=x;
	}
	a=op[0];
	b=op[1];
	c=op[2];
	d=op[3];
}
