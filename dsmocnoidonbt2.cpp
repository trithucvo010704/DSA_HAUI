#include<bits/stdc++.h>
using namespace  std ; 

struct hanghoa {
	string hd , ten_hang_hoa ,hangsx ; 
	int soluong , dongia , namsx ; 
};

struct node {
	hanghoa infor ; 
	node *next ; 
}

typedef struct  node* TRO  ; 

void nhap( hanghoa &a ){
	cout <<"Nhap ma hoa don : " ;  cin >> a.hd ; 
	cout <<"Nhap ten hang hoa  : " ;  getline(cin, a.ten_hang_hoa); 
	cout <<"Nhap so luong  : " ;  cin >> a.soluong ; 
	cout <<"Nhap don gia : " ;  cin >> a.dongia ; 
	cout <<"Nhap nam sx  : " ;  cin >> a.namsx ;
	cin.ignore();  
	cout <<"Nhap hang sx  : " ;  getline(cin , a.hangsx) ; 
	
}

void xuat ( hanghoa a ){
	cout << "MA HD : "<<a.hd <<"Ten hang hoa : " <<a.ten_hang_hoa << "SL : " <<a.soluong <<"Don gia : " <<a.dongia 
	<< "Nam san xuat : " << a.namsx <<" Hang SX : " <<a.hangsx <<endl ; 
}

void create ( TRO &L){
	L = NULL ; 
}
void size( TRO L){
	int cnt = 0 ; 
	while( L!= NULL){
		++cnt ; 
		L = L->next ; 
	}
}

