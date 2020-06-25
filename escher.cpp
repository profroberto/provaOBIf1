#include<iostream>
//Escher por Prof. Roberto
using namespace std;
int main(){
	int n,p,l;
	cin >> n;
	int v[n];
	for(int i=0; i<n; i++)cin >> v[i]; //leitura das alturas
	p = v[0] + v[n-1];    //padrao de altura
	int i = 1, j = n - 2;
	while(j >= i){
		if(v[i] + v[j] != p){
			cout << "N";
			return 0;
		}
		i++;
		j--;
	}
	cout << "S";
	return 0;
}
