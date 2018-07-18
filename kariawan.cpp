#include <iostream>
using namespace std;

class kariawan{
	private :
		double nilai, persen;
	public:
		double kd, kt, kk, pn, kc;
		char nama[20];
		int usia;
		string alamat;

void isi(){
	cout<<"/t/tpersentase penilaian kariawan"<<endl;
	cout<<"============================================"<<endl;
	cout<<"Nama Kariawan	= "; cin>>nama;
	cout<<"Usia Kariawan	= "; cin>>usia;
	cout<<"Alamat		= "; cin>>alamat;
	cout<<endl<<"Nilai Kedisiplinan	= "; cin>>kd;
	cout<<"Nilai Ketrampilan	= "; cin>>kt;
	cout<<"Nilai Komunikasi	= "; cin>>kk;
	cout<<"Nilai penampilan	= ";cin>>pn;
	cout<<"Nilai Kecekatan		= "; cin>>kc;
	}

int rumus(){
	nilai=kd+kt+kk+pn+kc; //mencari jumlah
	persen=nilai/500*100; //menghitung persen
	}

void tampil (){
	cout<<endl<<"=================================="<<endl;
	cout<<"Jumlah Nilai			= "<<nilai<<endl;	
	cout<<"Nilai persentase Kariawan = "<<persen<<" %"<<endl;
	cout<<endl<<"====================================="<<endl;
	}
};

int main(){
kariawan KW;
KW.isi();
KW.rumus();
KW.tampil();
}

