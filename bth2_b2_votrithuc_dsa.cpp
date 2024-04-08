#include<bits/stdc++.h>
using namespace std  ;

struct dovat{
	int khoiluong,giatri ; 
	float dongia ; 
};
void sort( dovat a[] , int n){
	for( int i = 0 ; i<n ; i++){
		for( int j = i+1 ; j <  n ; j++){
			if( a[i].dongia < a[j].dongia){
				swap(a[i] ,a[j]) ; 
			}
		}
	}

}
void nhap( dovat a[] , int n ){
	for( int i = 0 ;  i< n ; i++){
		cout << "Nhap do vat thu " <<i+1 << ": " ; 
		cout << "Nhap khoi luong : " ;  cin >> a[i].khoiluong ; 
		cout << "Nhap gia tri : " ;  cin >> a[i].giatri ; 
		a[i].dongia  =  1.0* a[i].giatri /a[i].khoiluong ; 
		cout << a[i].dongia <<" " <<endl ;
	}
	
}
void xepbalo( dovat a[] , int n , int w ){
	sort(a,n) ;  
	for( int i = 0 ; i< n  ; i++){
		if( w >= a[i].khoiluong){
			w-= a[i].khoiluong ; 
			cout <<"gia tri : "<< a[i].giatri <<" khoi luong : " <<a[i].khoiluong  <<" don gia : " <<a[i].dongia <<endl ;
			cout << "Khoi luong con lai : " << w <<endl ;
		}else {
			continue ; 
		}
	}
}
int main(){
	int  n ; cout << "nhap so luong do vat : " ;  cin >>  n ; 
	int w ; cout << "Nhap khoi luong balo : " ; cin>> w ; 
	dovat a[n] ; 
	nhap( a,n) ; 

	xepbalo(a,n,w) ; 
}