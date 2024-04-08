#include<bits/stdc++.h>
using namespace std  ; 

void bubleSort( int a[] , int n ){
	// tang dan 
	for( int i = 0 ; i< n ; i++){
		for( int j = n-1 ;  j>=  i ;  j--){
			if( a[j] <a[j-1]){
				int tg = a[j] ; 
				a[j] = a[j-1] ; 
				a[j-1] = tg ; 
			}
		}
	}
}

void selectiionSort( int a[] , int n){
	// tang dan 
	for( int i = 0 ; i< n-1 ; i++){
		int m = i ; 
		for( int  j = i+1 ; j< n ; j++){
			if( a[j] <a[m]) m =j ; 
		}
		if( m!= i ){
			int tg = a[m] ;
			a[m] = a[i] ; 
			a[i] = tg;
		}
	}
}
void ChenSort ( int a[] , int n ){
	// tang dan 
	for( int i = 0 ;  i< n-1 ; i++){
		int tmp = a[i];
		int j = i-1; 
		while( j>-1 && tmp <a[j]){
			a[j+1] = a[j] ; 
			--j ; 
		}
		a[j+1] = tmp ; 
	}
}

int binarySearch( int a[] , int left , int right , int k){
	while( left <= right){
		int m = (left+ right) /2 ; 
		if( a[m] == k) return m ; 
		else if (a[m] < k  ){
			left = m+1 ; 
		}
		else right = m-1 ; 
	}
	return -1 ; 
}
int binarySearch2 ( int a[] , int left , int right , int k ){
	if( left > right ) {
		return -1 ;
	}
	else {
		int mid = (left+right ) /2 ; 
		if( a[mid] == k ) return mid ; 
		else if( a[mid] <k ) binarySearch2(a,mid+1,right, k) ; 
		else binarySearch2(a,left,mid-1, k) ; 
	}
}
int main(){
	int n ; cout<< " Nhap so luong phan tu cua mang "  ; cin >> n  ; 
	int a[n] ; 
	
	for( int i = 0 ; i< n ; i++ ) cin >> a[i] ; 
	int k ;  cout << "Nhap phan tu can tim kiem : " ; cin >> k ; 
//	
//	cout << endl ; 
//	cout << "---------" ;
//	bubleSort(a,n) ; 
//	for( int i = 0 ; i< n ; i++) cout << a[i] <<" "; 	
//	cout << endl ; 
//	cout << "---------" ;
//	selectiionSort(a,n) ; 
//	for( int i = 0 ; i< n ; i++) cout << a[i]<< " " ; 
//		
//	cout << endl ; 
//	cout << "---------" ;
//	ChenSort(a,n) ; 
//	for( int i = 0 ; i< n ; i++) cout << a[i] <<" " ; 
	chenSort(a,n) ; 
	if( binarySearch( a,0,n-1,k) == -1){
		cout << "NOT FOUNDED !" ;
	}
	else cout << "FOUNDED !" ; 
}