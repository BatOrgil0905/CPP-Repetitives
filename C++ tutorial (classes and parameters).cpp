#include <iostream>
using namespace std;

class TheMainStorage{
	public:
		void SeperatedThings(){
			cout<<"Dude why didn't you open another function"<<endl;
		}
		void AnotherFunction(){
			cout<<"Thanks for opening this thing, but i would rather choose seperated things"<<endl;
		}
};
int main(){
	TheMainStorage Object;
	Object.AnotherFunction();
	
	return 0;
}
