#include <iostream>
#ifndef CHAR_BIT
#define CHAR_BIT 8
#endif
/*
http://programmingpraxis.com/2013/08/09/bit-hacks/
Find sign of a number
check if 2 numbers have same sign
*/
using namespace std;
int main(){
	int n;
	cin >> n ;
	int sign = +1 | (n >> (sizeof(int)*CHAR_BIT -1) );
	cout << sign << endl;
	int a , b;
	cin >> a >> b;
	cout << (a ^ b) << endl;
}