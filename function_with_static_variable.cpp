#include <iostream>
using namespace std;

void fun1(){
	int i = 10;
	i++;
	cout << i << endl;
}

void fun2(){
	static int i = 10;
	i++;
	cout << i << endl;
}

int main() {

	fun1(); // 11
	fun1(); // 11
	fun1(); // 11

	cout << endl;

	fun2(); // 11
	fun2(); // 12
	fun2(); // 13

}
