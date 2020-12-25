#include<iostream>
using namespace std;

char before(char x){
	char result;
	if (x < 'A'){
			result = '0';
			return result;
	}
	if (x == 'A'){
		result = 'Z';
		return result;
	}
	if (x > 'Z'){
		result = '0';
		return result;
	}
	return x-1;
	
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
