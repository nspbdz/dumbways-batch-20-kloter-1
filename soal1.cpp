#include<iostream>

using namespace std;

int main(){
	 cout<<"menentukan olahraga dan waktu olahraga dari jumlah kalori yang andi makan   "<<endl;
	cout<< "================================================================="<<endl;
	int kalori,waktu; // membuat variabel bertipe data integer
	cout<<"jumlah kalori yang andi makan = "; // print jumlah kalori yang andi makan = 
	cin>> kalori;// memasukan jumlah kalori 


	if (kalori >= 750){ //  jika kalori kalori lebih dari sama dengan 750 maka
		cout<<"olahraga yang dilakukan =  lari"<< endl;  // tampilkan olahraga yang dilakukan =  lari . endl= ganti baris
		waktu=kalori/10; // waktu sama dengan kalori dibagi 10 jika kalori 100 maka jumlah waktu nya adalah 10 menit 
		cout<<"waktu olahraga : "<<waktu<<" menit"; // print  waktu olahraga : dan tampilkan variabel waktu
    }
    	else if (kalori >=500){  // dan jika  kalori kalori lebih dari sama dengan 500 maka
			cout<<"olahraga yang dilakukan =  badminton"<< endl; // tampilkan olahraga yang dilakukan =  badminton . endl= ganti baris
		waktu=kalori/10;// waktu sama dengan kalori dibagi 10 jika kalori 100 maka jumlah waktu nya adalah 10 menit
		cout<<"waktu olahraga : "<<waktu<<" menit";// print  waktu olahraga : dan tampilkan variabel waktu
		
	} else if (kalori <500 ){ // dan jika  kalori kalori kurang dari 500 maka
			cout<<"olahraga yang dilakukan =  renang"<< endl;  // tampilkan olahraga yang dilakukan =  renang . endl= ganti baris
		waktu=kalori/10; //  waktu sama dengan kalori dibagi 10 jika kalori 100 maka jumlah waktu nya adalah 10 menit
		cout<<"waktu olahraga : "<<waktu<<" menit"; // print  waktu olahraga : dan tampilkan variabel waktu
		
	}  else{
		
	}
}
