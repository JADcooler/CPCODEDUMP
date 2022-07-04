#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int sp=0,wp=0;
    int inp=100;
    for(int i=1;i<=inp;i++)
    {
        sp+=i*i;
        wp+=i;
    }
    wp*=wp;
    cout<<wp-sp<<endl;
    
    
    
	return 0;
}

