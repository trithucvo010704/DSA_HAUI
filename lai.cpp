#include<bits/stdc++.h>

const int  MAX = 4 ; 
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
	SV e[MAX] ;
};
List L ;

void ktaoList( List &L){
	L.count = -1 ; 
}
int isEmpty ( List &L){
	return L.count == -1 ; 
}
int isFull ( List &L){
	if( L.count +1 == MAX) return 1  ;
	else return 0 ; 
}
void nhapSV(SV &a){
	cout << "Nhap MSV : " ; cin >> a.Msv; 
	cin.ignore(); 
	cout << "Nhap ho dem : " ;  getline( cin,a.hodem) ; 
	cout << "Nhap ten : " ;  getline(cin,a.ten); 
	cout << "Nhap gioi tinh : "; cin >> a.gioi_tinh ;
	
	cout << "Nhap nam sinh :" ; cin >> a.namsinh; 
	cout << "Nhap diem tong ket : "; cin >> a.diem_tk; 
	
}
int addLastList ( List &L , SV &a){
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

int remove ( int k , List &L ){
	if( k<= L.count + 1 && k > 0){
		for( int i = k ;  i<= L.count ;i++){
			L.e[i-1] = L.e[i]; 
		}
		L.count -- ;
		return 1 ; 
	}
	else return 0 ; 
}

int insert( List &L , int k , SV &a ){
	if( k <= L.count && k > 0  && !isFull(L)){
		for( int i = L.count  ; i>= k ;  i--){
			L.e[i+1] = L.e[i]; 
		}
		
		cout << "Nhap thong tin sv can them : "<<endl; 
		nhapSV(a); 
		L.e[k-1] = a;
		L.count ++; 	
		return 1 ; 
	}
	
	else return 0 ;
}

void createList( List &L){
	SV a ; 
	int i=0;
	cout<<"------------------NHAP THONG TIN SINH VIEN ------------- \n";
	char c ; 
	cout <<"Ban can nhap thong tin sinh vien (C/K)" ;
	cin >> c ; 
	if( c =='C'){
		char luachon ='C'; 		
		while(luachon=='C'){
			cout<<"nhap thong tin sinh vien thu "<<i+1<<endl;
			nhapSV(a);
			L.e[i]=a;
			L.count++;
			i++;
			cout << "Ban co muon nhap thong tin sinh vien tiep theo khong (C/K) : "; cin >>luachon ;
		}
	}
	else return ; 
}
void hienSV(List &L){
	for(int i=0; i<L.count; i++){
		cout<<"ma sinh vien: "<<L.e[i].Msv<<endl;
		cout<<"ho dem sinh vien : "<<L.e[i].hodem<<endl;
		cout<<"ten sinh vien : "<<L.e[i].ten<<endl;
		cout<<"gioi tinh : "<<L.e[i].gioi_tinh<<endl;
		cout<<"nam sinh : "<<L.e[i].namsinh<<endl;
		cout<<"Diem tong ket : "<<L.e[i].diem_tk<<endl;
	}	
}
int main(){
	ktaoList(L);
	createList(L); 
	cout << "\n ==========+++========="<<endl;
	hienSV(L);
	SV a ; 
	cout << "Them sinh vien cuoi danh sach !" <<endl; 
	if( addLastList(L,a)){
		cout << "Them thanh cong ! " <<endl ;
	}
	else {
		cout << "Danh sach day ! Khong them duoc !" <<endl ; 
	}
	cout << "=========Danh sach sau khi them : "<<endl ;
	hienSV(L);
	
}
