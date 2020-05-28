#include<iostream>
#include<string>

using namespace std;

class Ball{
	private:
		string color;
		int radius;
	public:
		Ball(){color ="black";radius=10;}
		Ball(const std::string &Color){color=Color; radius=10;}
		Ball(int Radius){color="blue";radius=Radius;}
		void print(){
			cout<<color<<endl;
			cout<<radius<<endl;	
		}		
};
int main()
{
	Ball def{};
	def.print();
 
	Ball blue{"blue"};
	blue.print();
	
	Ball twenty{ 20.0 };
	twenty.print();
 
	return 0;
}

