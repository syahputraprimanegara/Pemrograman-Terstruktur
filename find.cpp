#include <string>
#include <iostream>
using namespace std;
int main(){
	
	char kotak[9][9] =	{{'a','b','c','d','e','r','a','n','g'},
				 		 {'m','i','n','a','n','g','s','a','d'},
				 		 {'k','l','m','n','o','g','c','x','z'},
				 		 {'p','q','r','s','t','p','o','m','b'},
				 		 {'u','v','w','x','y','f','s','a','w'}};
	
	string tmp;
	
	for(int b=0; b<=4; b++){
		for (int k=0; k<=4; k++){
			tmp+=kotak[b][k];
			cout<<tmp<<endl;
	//		cout<<endl;
		}
	}

	for(int b=0; b<=4; b++){
		for (int k=0; k<=4; k++){
			tmp+=kotak[k][b];
			cout<<tmp;
			cout<<endl;	
		}
	}
	
	return 0;
}
