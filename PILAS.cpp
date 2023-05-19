#include <iostream>
#include <stack>

int main(){
	std::stack<int>pila;
	pila.push(10);
	pila.push(20);
	pila.push(30);
	while(!pila.empty()) {
		std::cout<<pila.top()<<"";
		pila.pop();
	}
	return 0;
}