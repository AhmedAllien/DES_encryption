#include "des.h"
int main()
{
	int out_bits,in_bits;
	string hex_input;
	cin>>out_bits;
	int ptable[256];
	for(int i=1;i<=out_bits;i++){
		cin>>ptable[i];
	}
	cin>>in_bits;
	cin>>hex_input;
	string hex_out = permutation(ptable,out_bits,hex_input,in_bits); 
	cout<<hex_out;
	return 0;
}
