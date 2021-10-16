#include <iostream>
using namespace std;

int addRandomNumber(int x, int y, int a, int b){
	int answer = x+a*b-y;
	return answer;
}

int main(){
	cout<<addRandomNumber(5,8,10,6);
	return 0;
}
