#include<bits/stdc++.h>
using namespace std  ; 

struct SV{
	string hoten ; 
	string gioitinh ; 
	int namsinh ; 
	float diem ; 	
};
void nhap ( SV a[] , int &n){
//	cout << "Nhap so luong sinh vien : ";  cin >> n ; 
//	a = new SV[n] ;  
// 
	for( int i = 0 ; i< n ; i++){
		cout << "Nhap thong tin sinh vien thu " << i+1 <<endl ; 
		cin.ignore() ;
		cout << "Nhap ho va ten : "  ;  getline( cin , a[i].hoten); 
		cout << "Nhap gioi tinh : "  ;  cin >>a[i].gioitinh ; 
		cout << "Nhap nam sinh  : "  ;  cin >>a[i].namsinh ; 
		cout << "Nhap diem : " ; cin >> a[i].diem  ; 	
	}
}
void xuat( SV a[] , int n){
	for( int i = 0 ; i< n ; i++){
		cout << "Thong tin SV thu" << i+1<<" la : " <<endl ;
		cout << "Ho ten : "<<a[i].hoten <<" Gioi tinh : "<<a[i].gioitinh <<" Nam sinh : "<<a[i].namsinh <<" Diem : " <<a[i].diem <<endl ;
	}
}
string lastName ( string name){
	string ten ; 
	int last = name.find_last_of(' ') ; // ham tim vi tri dau cach cuoi cung 
	ten =  name.substr(last+1) ; 
	return ten ; 
	
}
void sortByScore ( SV a[] , int n){
	for (int i = 1; i<n ; i++){
		for( int j = n-1 ;  j>= i ; j--){
			if( a[j].diem >a[j-1].diem){
				SV tmp   ; 
				tmp  =a[j-1] ; 
				a[j-1] = a[j] ; 
				a[j] = tmp ; 
			}
		}
	}
}
int linearSearchwithNAME ( SV a[] , int n , string Name){
	for( int i = 0 ;  i< n ; i++){
		if( Name == lastName( a[i].hoten)) {
			return i ;
		} 
	}
	return -1; 
}
int linearSearchwithScore ( SV a[] , int n , int diem ){
	for( int i = 0 ; i< n ;  i++){
	 	if(a[i].diem == diem){
	 		cout << "Tim thay sinh vien !" <<endl ;	
			return i ; 		
		}
	}
	return -1; 
}

int binarySearch( SV a[] , int l , int r, int k ){
	if( l> r) return -1; 
	else {
		int mid = (l+r) /2 ;
		if( a[mid].diem == k){
			return mid; 
		}
		else if ( a[mid].diem < k ){
			binarySearch( a,mid+1, r , k) ; 
		}
		else binarySearch(a,l, mid-1, k); 
	}
	
}
int main(){
	SV *a ; 
	int n  ; cout << "Nhap so luong sinh vien : " ;  cin >> n ; 
	a = new SV[n] ; 
	nhap(a,n) ; 
	xuat(a,n); 
	sortByScore(a,n) ; 
	cout << "Danh sach sinh vien sau khi sap xep : " <<endl ;
	xuat(a,n) ; 
	
	string name ; cout << "Nhap ten SV can tim kiem : " ;  cin >> name ; 
	if(linearSearchwithNAME(a,n,name)  == 1){
		cout << "NotFound "<<endl ;
	}
	else {
		cout << "FOUNDED" ; 
	}
	delete []a ; 
}

