#include<bits/stdc++.h>
using namespace std  ;
void heapify( int a[] , int n  , int i ){
	int min  = i ;
	int l = 2*i +1  ; 
	int r = 2*i + 2 ; 
	 
	if( l< n && a[l] < a[min]){
		min  = l ; 
	}
	if( r< n && a[r] < a[min]){
		min =  r  ; 
	}
	if( min != i ){
		swap( a[min] , a[i]); 
		heapify( a, n , min) ; 
	}
	
}
void heapsort( int a[] , int n ){
	// xay dung node dau tien
	for( int i = n/2  -1 ;  i>= 0   ; i--){
		heapify(a,n,i) ; 
	}
	// heapsort 
	for( int i = n-1 ; i>= 0 ;  i--){
		swap( a[i] , a[0]) ; 
		heapify( a,i,0) ; 
	}
}

int greedy ( int a[] , int n  , int s ){
	heapsort( a,n) ; 
	int i = 0 , p = 0 ; 
	while( i< n && p<= s){
		p+=  a[i] ; 
		i++ ;
	}
	if( p>s ) return i ; 
	else return -1 ; 
	
	
}
void sapxep( int a[] , int n ){
	for( int i = 0 ;  i< n-1 ; i++){
		for( int j = n-1 ; j> i ;j--){
			if( a[j] > a[j-1]){
				swap( a[j] , a[j-1]) ; 
			}
		}
	}
}
int main(){
	int a[] = {65,41,41,65,1,32,54,52,18,31} ; 
	int s = 215 ; 
//	heapsort(a,sizeof(a) / sizeof( a[0]) ) ; 
	sapxep( a,sizeof(a) / sizeof( a[0]) ); 
	
	for( int x : a) cout <<x <<" " ; 
	cout << endl ;
	cout << greedy( a, sizeof(a) / sizeof( a[0]) , s) <<endl ; 
	
	
}