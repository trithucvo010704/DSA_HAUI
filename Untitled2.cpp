#include<bits/stdc++.h>
using namespace std ; 

struct SV  {
	string msv ,hodem,ten,gioitinh; 
	int namsinh ; 
	float diemtk ; 
	
};
struct NODE {
	SV a ; 
	NODE * next ; 
};

typedef struct NODE * TRO ; 

void nhap( SV &a ){
	cout <<"Nhap msv : " ;  cin >> a.msv ;cin.ignore() ;  
	cout <<"Nhap ho dem : " ;  getline(cin, a.hodem) ; 
	cout <<"Nhap ten : " ;  cin >> a.ten ; 
	cout <<"Nhap gioi tinh : ";  cin >> a.gioitinh ; 
	cout <<"Nhap nam sinh : " ; cin >> a.namsinh ; 
	cout <<"Nhap diem TK : "; cin >> a.diemtk ; 
}
void xuat ( SV a){
	cout <<"MSV:"<< a.msv << "\t " <<"ho ten : "<< a.hodem <<" " <<a.ten <<" Gioi tinh :"<< a.gioitinh <<"nam sinh :" <<a.namsinh <<" diem tk :" <<a.diemtk <<endl ; 
}

void create ( TRO &L){
	L = NULL ;  
}
int empty( TRO L ){
	return L == NULL ;
}
int size ( TRO L){
	int cnt = 0 ; 
	TRO Q =L ;
	while( Q!= NULL){
		++cnt ; 
		Q = Q->next ; 
	}
	return cnt ; 

}

int deletenode ( TRO &L , int k ){
	int n = size(L) ; 
	if( k <= n+1 && k>0 ){
		int cnt = 0 ;
		TRO Q = L ; 
		while(cnt <= k ){
			++cnt;
			Q = Q->next ; 
		}
	cout << cnt ;
	TRO M = Q->next ; 
	Q->next = M->next ; 
	delete Q ; 
	return 1 ; 
	}
	else return 0 ; 
}

void createlist( TRO &L){
	create(L) ; 
	TRO P,Q ;
	SV a ; 
	char tieptuc ; 
	do{
		P = new NODE() ;
		cout <<"Nhap du lieu cho sinh vien !" << endl ; 
		nhap(a); 
		P->a = a ; 
		P->next = NULL ;
		if( L==NULL){
			L= P ; 
		}
		else {
			Q->next = P ;
		}
		Q=P ; 
		cout << "Co tiep tuc nhap khong (C/K) : ";  cin >> tieptuc ; 
	}
	while( toupper(tieptuc) =='C') ; 
}

void printList(TRO L){
	TRO Q = L ; 
	while( Q!= NULL){
		xuat(Q->a); 
		Q = Q->next ; 
	}
}
int main(){
	TRO L;
	createlist(L); 
	printList(L); 
	cout << "Nhap vi tri can xoa trong danh sach :"; 
	int k  ; cin >> k ; 
	if(deletenode(L,k)){
		cout <<"XOA THANH CONG!" <<endl ;
		cout << "DANH SACH SAU KHI XOA :" <<endl ; 
		printList(L); 
	}
	else cout << "XOA K THANH CONG !" <<endl;
}