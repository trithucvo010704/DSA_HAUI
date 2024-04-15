#include<bits/stdc++.h>
using namespace std  ; 
int search1( string s[], string x ){
	for( int i = 0 ;  i< s.length();i++){
		if( x == s[i]){
			cout << "Da tim thay !" ; 
			return i ; 
		}
	}
	return -1 ;
}
int search2 ( string s[], string x){
	int l = 0 ,r = s.length()-1 ; 
	while( l <= r){
		int m = (l+r) /2 ; 
		if( s[m] == x) return m ; 
		else if ( s[m] > x ){
			r = m-1 ; 
		}
		else l =  m+1 ;
	}
	return -1 ;
}
int main(){
	string s[100] ; 
	int n   ; cin >> n ; 
	
	for( int i = 0 ;  i<  n ; i++){
		cin >> s[i] ; 
	}
	cout << "nhap tu can tim : " ; 
	string x ; cin >> x ; 
	if( search1( s,x) == -1){
		cout << "kHONG TIN  THAY " ; 
	}
	else cout << "FOUNDED " <<endl ;
}