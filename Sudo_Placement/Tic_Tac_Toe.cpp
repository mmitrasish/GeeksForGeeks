#include<bits/stdc++.h>
using namespace std;
bool hasWon(char a[3][3], char b){
    for(int i=0; i<3; i++){
        if(a[i][0] == b && a[i][1] == b && a[i][2] == b)
            return true;
        if(a[0][i] == b && a[1][i] == b && a[2][i] == b)
            return true;
    }
    
    if(a[0][0] == b && a[1][1] == b && a[2][2] == b)
        return true;
    if(a[0][2] == b && a[1][1] == b && a[2][0] == b)
        return true;
        
    return false;
}
int main()
 {
	//code
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    char a[3][3]; int noX=0, noO=0;
	    for(int j=0; j<3; j++){
	        for(int k=0; k<3; k++){
	            char temp; cin>>temp;
	            if(temp == 'O') noO++;
	            else if(temp == 'X') noX++;
	            
	            a[j][k] = temp;
	        }
	    }
	    if(noO>noX) cout<<"Invalid"<<endl;
	    else if(noO==noX) {
	        if(hasWon(a, 'O')) cout<<"Valid"<<endl;
	        else cout<<"Invalid"<<endl;
	    }else if(noX-noO > 1) cout<<"Invalid"<<endl;
	    else if(noX>noO){
	        if(hasWon(a, 'O')) cout<<"Invalid"<<endl;
	        else cout<<"Valid"<<endl;
	    }
	    
	}
	return 0;
}