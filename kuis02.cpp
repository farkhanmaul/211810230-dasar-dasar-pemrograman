#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

void write(){
	ofstream myfile;
    myfile.open("Kuis2.txt", ios::trunc);

	string kata;
	cout<<"\nTuliskan kata-kata : ";getline(cin, kata);
	
    if(!myfile.fail())
    {
        myfile<<kata<<endl;
        myfile.close();
        cout<<"Text telah ditulis ke dalam File"<<endl;
    }else{
        cout<<"File tidak ditemukan"<<endl;
    }
}

void read(){
	ifstream open;
    char sv_text;
    open.open("Kuis2.txt");

    cout<<"                OPERASI FILE"<<endl;
    cout<<"-----------------------------------------------"<<endl;

    if(!open.fail())
    {
        cout<<"                Isi dari File";
        cout<<"\n===============================================\n";
        while (!open.eof())
        {
            open.get(sv_text);
            cout<<sv_text;
        }
        cout<<"==============================================="<<endl;
        open.close();
    }
	else{
        cout<<"File tidak ditemukan"<<endl;
    }
}

int main()
{
    int pil;
    
	do{
		cout<<"AKSES FILE"<<endl;
	    cout<<"1. Write"<<endl;
	    cout<<"2. Read"<<endl;
	    cout<<"3. Keluar"<<endl;
	    cout<<"Masukkan pilihan anda : ";cin>>pil;cin.ignore();
	    switch(pil){
	    	case 1:
	    		write();	
    			getch();
    			system("cls");
	    		break;
	    	
	    	case 2:
	    		read();
	    		getch();
	    		system("cls");
	    		break;
		}
	}
	while(pil!=3);
    return 0;
}

