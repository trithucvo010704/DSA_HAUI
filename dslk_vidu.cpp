#include<iostream>
#define max 6
using namespace std ; 
struct SV{
	string Msv ;
	string hodem ; 
	string ten ; 
	string gioi_tinh ; 
	int namsinh ;
	float diem_tk ;
	
};
struct List{
	int count ; 
	SV e[max] ;
};
List L ;

void createList( List &L){
	L.count = -1 ; 
}
int isEmpty ( List &L){
	return L.count == -1 ; 
}
int isFull ( List &L){
	if( L.count +1 = max) return 1  ;
	else return 0 ; 
}
void nhapSV(SV &a){
	cout << "Nhap MSV : " ; cin >> a.Msv;
	cout << "Nhap ho dem : " ;  getline( cin,a.hodem) ; 
	cout << "Nhap ten : " ;  getline(cin,a.ten); 
	cout << "Nhap gioi tinh : "; cin >> a.gioi_tinh ;
	
	cout << "Nhap nam sinh :" ; cin >> a.namsinh; 
	cout << "Nhap diem tong ket : "; cin >> a.diem_tk; 
}
int addLastList ( List &L , SV a){
	if( isFull(L) ){
		return 0 ; 
	}
	else {
		L.count++; 
		cout << "Nhap thong tin sv can them !"; 
		nhapSV(a); 
		L.e[L.count] = a;
		return 1; 
	}
}

int main(){
	SV a ; nhapSV(a); 
}
