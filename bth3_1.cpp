#include<bits/stdc++.h>
using namespace std  ; 

int linearSearch ( int a[] , int n  ,  int k ){
	int i = 0 ;
	while( i< n && a[i]!= k ){
		++i ;
	}
	if( i< n) return i ; 
	else return -1 ; 
}
int main()
{
	int n,k ;  cout << "Nhap so luong phan tu cua day : " ;  cin >> n ; 
	int a[n] ; 
	for( int i = 0 ; i< n ;i++){
		cin >> a[i] ; 
	}
	
	cout << "Nhap phan tu can tim kiem : " ; cin >> k ;
	if( linearSearch(a,n,k) == -1){
		cout <<"Not Found !" <<endl ; 
	}
	else {
		cout << "Founded !" <<endl ;
	}
}