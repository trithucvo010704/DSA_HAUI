#include <bits/stdc++.h>
using namespace std;
struct HANGHOA{
	char MaHH[10];
	char Tenhanghoa[10];
	int Soluong[10];
	int Dongia[10];
	int Namsanxuat;
	char HangSX[20];
	
};
struct Node{
	HANGHOA infor;
	Node *next;
};
typedef Node*TRO;
void KhoiTao(TRO L ){
	L = NULL;
}
int Empty(TRO L){
	return L == NULL;
}
void NhapS(HANGHOA &HH){
	cout<<"\tNhap ma hang hoa: "; fflush (stdin);
	gets(HH.MaHH);
	if(strcmp(HH.MaHH,"***")==0){
		return;
	}
	cout<<"\tTen hang hoa: ";fflush(stdin);
	gets(HH.Tenhanghoa);
	cout<<"\tSo luong : ";cin>>HH.Soluong;
	cout<<"\tDon gia: "; cin>>HH.Dongia;
	cout<<"\tNam san xuat: ";cin>>HH.Namsanxua;
	cout<<"\tHang san xuat: ";fflush(stdin);
	gets(HH.HangSX);
}
void NhapDS(TRO &L){
	KhoiTao(L);
	HANGHOA X;
	TRO Q, P;
	int i =1;
	do{
		cout<<"Nhap ma hd "<<i<<endl;
		NhapS(X);
		if (strcmp(X.mahd,"***")==0){
			return;
		}
		P = new(Node);
		P -> infor = X;
		P -> next = NULL;
		if(L == NULL){
			L=P;
		}else{
			Q -> next = P;
		}
		Q = P;
		i++;
	}while(1);
}
void hiethiDS(TRO L){
	cout<<setw(5)<<STT;
	cout<<setw(10)<<"Ma hang hoa";
	cout<<setw(10)<<"So luong";
	cout<<setw(10)<<"Don gia";
	cout<<setw(5)<<"Nam san xuat";
	cout<<set(20)<<"Hang san xuat"<<endl;
	TRO Q=L;
	int i = 0;
	while (Q!=NULL){
		HANGHOA X = Q -> infor;
		cout<<setw(5)<<(l=i);
		cout<<setw(10)<<X.Tenhanghoa;
		cout<<setw(10)<<X.Soluong;
		cout<<setw(10)<<X.Dongia;
		cout<<setw(10)<<X.Namsanxuat;
		cout<<setw(20)<<X.HangSX<<endl;
		Q=Q->next;
		i++;
	}
}
TRO Search(TRO i, int
