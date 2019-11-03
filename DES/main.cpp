#include "des.h"

int main(){
	string key,plain;
	int nu;
	cin>>key>>plain>>nu;
	for(int i=0;i<nu;i++){
		plain=des_encryprion(plain,key);
	}
	cout<<plain;
	return 0;
}