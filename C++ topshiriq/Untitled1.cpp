#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Telefon{
	private:
		string nomi, modeli,
		versiyasi, gpusi,
		kamerasi, xotirasi, batareykasi;
		int narxi;  
		float ishlab_chiqarilgan_davlati;

	public:
		void show(){
			static int k=0;
			cout<<++k<<" - telefon: "<<endl<<endl;
			cout<<"Nomi: "<<nomi<<endl;
			cout<<"Modeli: "<<modeli<<endl;
			cout<<"Versiyasi: "<<versiyasi<<endl;
			cout<<"Gpusi: "<<gpusi<<endl;
			cout<<"Kamerasi: "<<kamerasi<<endl;	
			cout<<"Xotirasi: "<<xotirasi<<endl;
			cout<<"Narxi: "<<narxi<<endl;
			cout<<"Ishlab_chiqarilgan_davlati: "<<ishlab_chiqarilgan_davlati<<endl;			
		};
		void input(){
			static int k=0;
			cout<<++k<<" - telefon: "<<endl;
			cout<<"Nomi: "; cin>>nomi;
			cout<<"Modeli: "; cin>>modeli;
			cout<<"Versiyasi: "; cin>>versiyasi;
			cout<<"Gpusi: "; cin>> gpusi;	
			cout<<"Kamerasi: "; cin>>kamerasi;
			cout<<"Xotirasi: "; cin>>xotirasi;
			cout<<"Narxi: "; cin>>narxi;
			cout<<"Ishlab_chiqarilgan_davlati: "; cin>>ishlab_chiqarilgan_davlati;
			cout<<endl;
		};
		void qidir(string s){
			int k;cout<<"Telefon"<<endl;
			cout<<"Nomi: "<<nomi<<endl;
			cout<<"Modeli: "<<modeli<<endl;
			cout<<"Versiyasi: "<<versiyasi<<endl;
			cout<<"Gpusi: "<<gpusi<<endl;
			cout<<"Kamerasi: "<<kamerasi<<endl;	
			cout<<"Xotirasi: "<<xotirasi<<endl;
			cout<<"Narxi: "<<narxi<<endl;
			cout<<"Ishlab_chiqarilgan_davlati: "<<ishlab_chiqarilgan_davlati<<endl;	
				cout<<"Bunday telefon mavjud: "<<endl;
				show();	
		};	
};
int main(){
   Telefon t[100];
   int N; cout<<"Telefon sonini kiriting: "; cin>>N;
   for(int i=0; i<N; i++){
		t[i].input();
   }
   string s;
   cout<<endl<<"Qidirilayotgan telfonning nomini kiriting: "; cin>>s;
   for(int i=0; i<N; i++){
		t[i].qidir(s);
   }   
}

