#include<bits/stdc++.h>
using namespace std ; 

#define max 5 

struct SV  {
	string msv ,hodem,ten,gioitinh; 
	int namsinh ; 
	float diemtk ; 
	
};

struct 	List{
	int count ; 
	SV e [max] ;
};
List L ; 



void nhap( SV &a ){
	cout <<"Nhap msv : " ;  cin >> a.msv ;cin.ignore() ;  
	cout <<"Nhap ho dem : " ;  getline(cin, a.hodem) ; 
	cout <<"Nhap ten : " ;  cin >> a.ten ; 
	cout <<"Nhap gioi tinh : ";  cin >> a.gioitinh ; 
	cout <<"Nhap nam sinh : " ; cin >> a.namsinh ; 
	cout <<"Nhap diem TK : "; cin >> a.diemtk ; 
}
void xuat ( SV a){
	cout << a.msv << "\t " << a.hodem <<" " <<a.ten <<" "<< a.gioitinh <<" " <<a.namsinh <<" " <<a.diemtk <<endl ; 
}
void ktaoList( List &L){
	L.count = -1; 
}

int full(List L){
	return L.count == max-1 ; 
}
int remove( int k , List &L ){
	if( k > 0 && k<= L.count+1 ) {
		for( int i = k  ; i<= L.count ; i++){
			L.e[i-1] = L.e[i];
		}
		L.count =L.count-1  ; 
		return 1 ; 
	}
	else return 0 ;  
}

int insertList ( int k , List &L , SV a ){
	if( k<= L.count+1 && k>0  && !full(L) ){
		cout << "Nhap thong tin SV can chen : " ; nhap(a) ; 
		for( int i = L.count +1 ;  i>= k-1 ; i--){
			L.e[i+1] = L.e[i] ; 
		}
		L.e[k-1] ; 
		L.count++ ;
		return 1 ;  
	}
	else return 0 ; 
}
int search_replace( int k,List &L ){
	if( k<= L.count+1 && k>0  && !full(L) ){
		for( int i = 0 ;  i<= L.count ; i++){
			if( i==k ){
				cout <<"Nhap thong tin thay the " ;  nhap(L.e[i]); 
				return 1 ; 
			}
		}
		return 0 ; 
	}
}
int count ( List L){
	int cnt = 0 ; 
	for( int i = 0 ;  i<= L.count ; i++){
		if(L.e[i].ten.find("A") != string::npos ){
			cnt++ ; 
		}
	}
	return cnt ; 
}

void createList (List &L){
	ktaoList(L) ; 
	char tieptuc ; 
	SV a ; 
	do{
		cout <<" Nhap thong tin sv can them : " ; nhap(a); 
		L.count ++ ; 
		L.e[L.count] = a ; 
		cout << "CO tiep tuc nhap nx k (C/K) : " ;  cin >> tieptuc ; 
	}
	while(toupper(tieptuc) =='C' || L.count == max -1 ) ; 
}

void printList( List L){
	for( int i = 0 ; i<=  L.count ; i++){
		xuat(L.e[i]) ; 
	}
}
void sortByten ( List &L ){
	for( int i =  0 ;  i<= L.count -1 ; i++){
		int m = i ; 
		for( int j = i+1 ;  j<= L.count;j++){
			if( L.e[j].ten < L.e[m].ten ) m = j ; 
		}
		if( m!= i ){
			SV a = L.e[m] ;
			L.e[m] =L.e[i] ;
			L.e[i] = a ;  
		}
	}
}
int main(){
	createList(L) ; 
	printList(L); 
	cout << L.count <<endl ;
	int k ; cout <<"Nhap vi tri can xoa : " ;  cin >>  k ; 
	if(remove(k,L) == 1){
		cout << "Xoa thanh cong !" <<endl ; 
		cout <<"Danh sach sau khi xoa : " << endl;  
		printList(L) ; 
	}
	else cout <<"Khong xoa thanh cong !" <<endl ;
	
	sortByten(L) ; 
	cout <<"Danh sach sau khi sap xep theo ten  !" <<endl; 
	printList(L) ; 
}


