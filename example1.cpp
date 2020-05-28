#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Fraction{
	private:
		int UpNumber;
		int DownNumber;
	public:
		void get();
		void set();
		int Compare();
};
void Fraction::get(){
	cout<<UpNumber<<endl;
	cout<<DownNumber<<endl;
}
void Fraction::set(){
	cout<<"Enter the upnumber of the fraction: "<<endl;
	cin>>UpNumber;
	cout<<"Enter the downnumber of the fraction: "<<endl;
	cin>>DownNumber;
}
int Fraction::Compare(){
	if((UpNumber*DownNumber)<0)
		return -1;
	if((UpNumber*DownNumber)>0)
		return 1;
	if((UpNumber*DownNumber)==0)
		return 0;
}

int main1() {
	Fraction test;
	test.set();
	test.get();
	int kq;
	kq=test.Compare();
	switch(kq){
		case 1:
			cout<<" POSITIVE! "<<endl;
			break;
		case -1:
			cout<<"NEGATIVE! "<<endl;
			break;
		case 0:
			cout<<" Zero! "<<endl;
			break;
	}
	return 0;
}
