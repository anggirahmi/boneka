#include <iostream>
#include <string>
using namespace std;

class boneka{
	public:
			void bahan(string busa);
			string warna;
			double ukuran;
};

int main(){
	boneka beruang;
	
	beruang.warna ="coklat";
	beruang.ukuran =30;
	
	cout<<"Warna boneka beruang "<< (beruang.warna)<<endl;
	cout<<"Harga sesuai label "<< (beruang.ukuran)<<endl;
	
	beruang.bahan("Bahan busanya sangat lembut");
}

void boneka::bahan(string busa){
	cout<<""
}

