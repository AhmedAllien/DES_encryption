#include "des.h"

int main()
{
	//id declararion

	int n;
	string hex_input;
	int ptable[256];
	int ivtable[256];
	string flag="";
	//input 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ptable[i];
		for(int j=1;j<i;j++){
			if(ptable[i]==ptable[j])flag="IMPOSSIBLE";
		}
	}
	if (flag=="IMPOSSIBLE");
	else
	{
		for(int i=1;i<=n;i++)
			for(long long j=1;j<=n;j++){
				if(ptable[j]==i){
					flag += to_string(j);
					flag+=" ";
				}
			}
			
		}
	cout<<flag;
	return 0;
}
