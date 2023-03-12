//PROJECT :02 SEMESTER 2(GENAP)
//PROGRAM : KONVERSI MATA UANG
//AUTHOR : KAKA MAULANA ABDILLAH
//NPM :065122029
//TANGGAL :7 MARET 2023
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

 main() {
    //deklarasi
	 float rupiah, usd, eur, jpy, gbp, rm;
	 char pilihan, pilih_currency, y;
    //awal untuk mengulang program
    awal:
    cout<<"============================================"<<endl;
    cout<<"=      AUTHOR: KAKA MAULANA ABDILLAH	 ="<<endl;
    cout<<"============================================"<<endl;
    cout<<"=	 	KONVERSI		 ="<<endl;
    cout<<"=	 	MATA UANG		 ="<<endl;
    cout<<"============================================"<<endl;
 	cout<<"=    ! Rate konversi tidak realtime !	="<<endl;
    cout<<"============================================"<<endl;
    cout<<endl;
    //pilih mata uang akan dikonversikan
    cout<<"Silahkan pilih mata uang yang akan dikonversi..\n";
    cout<<"1. Rupiah (Indonesian Rupiah)\n";
    cout<<"2. USD (American Dollars)\n";
    cout<<"3. EUR (Euro)\n";
    cout<<"4. JPY (Japanese Yen)\n";
    cout<<"5. GBP (Pound Sterling)\n";
    cout<<"6. RM (Ringgit Malaysia)\n";
    cout<< "Masukkan nomor yang dipilih : ";
    cin>> pilihan;
    //switch case untuh memilih jenis mata uang
    switch (pilihan)
    {
    case ('1'):
        system("cls");
    //KONVERSI MATA UANG DARI INDONESIAN RUPIAH
        cout<<"==========================\n";
        cout<<"|	Indonesian Rupiah   |\n  ";
	    cout<<"==========================\n";
    //pilih mata uang yang ingin dikonversi
	    cout<< "1. IDR to USD\n";
	    cout<< "2. IDR to EUR\n";
	    cout<< "3. IDR to JPY\n";
	    cout<< "4. IDR to GBP\n";
	    cout<< "5. IDR to RM\n";
	    cout<< "Masukkan nomor yang dipilih : ";
        cin >>pilih_currency;
    //If else untuk memilih jenis suhu
	    if (pilih_currency == ('1'))
	    {
			system("cls");
			cout<<"===================\n";
			cout<<"=	IDR to USD	 =\n";
		 	cout<<"===================\n";
		  	cout<< "Masukan Rupiah : ";	cin>> rupiah;
		   	usd = rupiah*0.000065;
			cout<< "USD (American Dollars) yang didapat : "<< usd << " USD" <<endl;
		//untuk mengulang program atau tidak
		    	cout << "Ingin diulang? (y/n) ";cin>>y;
			  	if (y=='y')
			   	{
			    //untuk clear program supaya rapih
			    system("cls");
			    goto awal;
			    }
			    else{

				}
		
		}

 		else if(pilih_currency == ('2'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	IDR to EUR	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan Rupiah : ";	cin>> rupiah;
		   	rupiah = rupiah*0.000061;
			cout<< "EUR (Euro) yang didapat : "<< eur << " EUR" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
 		else if(pilih_currency == ('3'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	IDR to JPY	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan Rupiah : ";	cin>> rupiah;
		   	rupiah = rupiah*0.0087;
			cout<< "JPY (Japanese Yen) yang didapat : "<< jpy << " JPY" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
 		else if(pilih_currency == ('4'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	IDR to GBP	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan Rupiah : ";	cin>> rupiah;
		   	rupiah = rupiah*0.000054;
			cout<< "GBP (Pound Sterling) yang didapat : "<< gbp << " GBP" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
        else if(pilih_currency == ('5'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	IDR to RM	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan Rupiah : ";	cin>> rupiah;
		   	rupiah = rupiah*0.00029;
			cout<< "RM (Ringgit Malaysia) yang didapat : "<< rm << " RM" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
        case ('2'):
        system("cls");
    //KONVERSI MATA UANG DARI AMERICAN DOLLARS
        cout<<"==========================\n";
        cout<<"|	American Dollars    |\n  ";
	    cout<<"==========================\n";
    //pilih mata uang yang ingin dikonversi
	    cout<< "1. USD to IDR\n";
	    cout<< "2. USD to EUR\n";
	    cout<< "3. USD to JPY\n";
	    cout<< "4. USD to GBP\n";
	    cout<< "5. USD to RM\n";
	    cout<< "Masukkan nomor yang dipilih : ";
        cin >>pilih_currency;
    //If else untuk memilih jenis suhu
	    if (pilih_currency == ('1'))
	    {
			system("cls");
			cout<<"===================\n";
			cout<<"=	USD to IDR	 =\n";
		 	cout<<"===================\n";
		  	cout<< "Masukan USD : ";	cin>> usd;
		   	rupiah = usd/0.000065;
			cout<< "IDR (Indonesian Rupiah) yang didapat : "<< rupiah << " IDR" <<endl;
		//untuk mengulang program atau tidak
		    	cout << "Ingin diulang? (y/n) ";cin>>y;
			  	if (y=='y')
			   	{
			    //untuk clear program supaya rapih
			    system("cls");
			    goto awal;
			    }
			    else{

				}

		}


 		else if(pilih_currency == ('2'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	USD to EUR	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan USD : ";	cin>> usd;
		   	eur = usd*0.94;
			cout<< "EUR (Euro) yang didapat : "<< eur << " EUR" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
 		else if(pilih_currency == ('3'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	USD to JPY	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan USD : ";	cin>> usd;
		   	jpy = usd*135.02;
			cout<< "JPY (Japanese Yen) yang didapat : "<< jpy << " JPY" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
 		else if(pilih_currency == ('4'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	USD to GBP	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan USD : ";	cin>> usd;
		   	gbp = usd*0.83;
			cout<< "GBP (Pound Sterling) yang didapat : "<< gbp << " GBP" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
        else if(pilih_currency == ('5'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	USD to RM	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan USD : ";	cin>> usd;
		   	rm = usd*4.52;
			cout<< "RM (Ringgit Malaysia) yang didapat : "<< rm << " RM" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
        case ('3'):
        system("cls");
    //KONVERSI MATA UANG DARI EURO
        cout<<"==========================\n";
        cout<<"|		EUR EUROPE 	  |\n  ";
	    cout<<"==========================\n";
    //pilih mata uang yang ingin dikonversi
	    cout<< "1. EUR to IDR\n";
	    cout<< "2. EUR to USD\n";
	    cout<< "3. EUR to JPY\n";
	    cout<< "4. EUR to GBP\n";
	    cout<< "5. EUR to RM\n";
	    cout<< "Masukkan nomor yang dipilih : ";
        cin >>pilih_currency;
    //If else untuk memilih jenis suhu
	    if (pilih_currency == ('1'))
	    {
			system("cls");
			cout<<"===================\n";
			cout<<"=	EUR to IDR	 =\n";
		 	cout<<"===================\n";
		  	cout<< "Masukan EUR : ";	cin>> eur;
		   	rupiah = eur/0.000061;
			cout<< "IDR (Indonesian Rupiah) yang didapat : "<< rupiah << " IDR" <<endl;
		//untuk mengulang program atau tidak
		    	cout << "Ingin diulang? (y/n) ";cin>>y;
			  	if (y=='y')
			   	{
			    //untuk clear program supaya rapih
			    system("cls");
			    goto awal;
			    }
			    else{

				}

		}


 		else if(pilih_currency == ('2'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	EUR to USD	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan EUR : ";	cin>> eur;
		   	usd = eur/0.94;
			cout<< "USD (American Dollars) yang didapat : "<< usd << " USD" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
 		else if(pilih_currency == ('3'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	EUR to JPY	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan EUR : ";	cin>> eur;
		   	jpy = eur*143.87;
			cout<< "JPY (Japanese Yen) yang didapat : "<< jpy << " JPY" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
 		else if(pilih_currency == ('4'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	EUR to GBP	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan EUR : ";	cin>> usd;
		   	gbp = eur*0.88;
			cout<< "GBP (Pound Sterling) yang didapat : "<< gbp << " GBP" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
        else if(pilih_currency == ('5'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	EUR to RM	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan USD : ";	cin>> eur;
		   	rm = eur*4.81;
			cout<< "RM (Ringgit Malaysia) yang didapat : "<< rm << " RM" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
        case ('4'):
        system("cls");
    //KONVERSI MATA UANG DARI JPY
        cout<<"==========================\n";
        cout<<"|	JAPANESE YEN 	  |\n  ";
	    cout<<"==========================\n";
    //pilih mata uang yang ingin dikonversi
	    cout<< "1. JPY to IDR\n";
	    cout<< "2. JPY to USD\n";
	    cout<< "3. JPY to EUR\n";
	    cout<< "4. JPY to GBP\n";
	    cout<< "5. JPY to RM\n";
	    cout<< "Masukkan nomor yang dipilih : ";
        cin >>pilih_currency;
    //If else untuk memilih jenis suhu
	    if (pilih_currency == ('1'))
	    {
			system("cls");
			cout<<"===================\n";
			cout<<"=	JPY to IDR	 =\n";
		 	cout<<"===================\n";
		  	cout<< "Masukan JPY : ";	cin>> jpy;
		   	rupiah = jpy*114.84;
			cout<< "IDR (Indonesian Rupiah) yang didapat : "<< rupiah << " IDR" <<endl;
		//untuk mengulang program atau tidak
		    	cout << "Ingin diulang? (y/n) ";cin>>y;
			  	if (y=='y')
			   	{
			    //untuk clear program supaya rapih
			    system("cls");
			    goto awal;
			    }
			    else{

				}

		}


 		else if(pilih_currency == ('2'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	JPY to USD	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan JPY : ";	cin>> jpy;
		   	usd = jpy*0.0074;
			cout<< "USD (American Dollars) yang didapat : "<< usd << " USD" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
 		else if(pilih_currency == ('3'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	JPY to EUR\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan JPY ";	cin>> jpy;
		   	eur = jpy*0.0070;
			cout<< "JPY (Japanese Yen) yang didapat : "<< eur << " EUR" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
 		else if(pilih_currency == ('4'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	JPY to GBP	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan JPY : ";	cin>> jpy;
		   	gbp = jpy*0.0062;
			cout<< "GBP (Pound Sterling) yang didapat : "<< gbp << " GBP" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
        else if(pilih_currency == ('5'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	JPY to RM	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan JPY : ";	cin>> jpy;
		   	rm = jpy*0.033;
			cout<< "RM (Ringgit Malaysia) yang didapat : "<< rm << " RM" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
        
        case ('5'):
        system("cls");
    //KONVERSI MATA UANG DARI GBP
        cout<<"==========================\n";
        cout<<"|	POUND STERLING 	  |\n  ";
	    cout<<"==========================\n";
    //pilih mata uang yang ingin dikonversi
	    cout<< "1. GBP to IDR\n";
	    cout<< "2. GBP to USD\n";
	    cout<< "3. GBP to EUR\n";
	    cout<< "4. GBP to JPY\n";
	    cout<< "5. GBP to RM\n";
	    cout<< "Masukkan nomor yang dipilih : ";
        cin >>pilih_currency;
    //If else untuk memilih jenis suhu
	    if (pilih_currency == ('1'))
	    {
			system("cls");
			cout<<"===================\n";
			cout<<"=	JPY to IDR	 =\n";
		 	cout<<"===================\n";
		  	cout<< "Masukan JPY : ";	cin>> jpy;
		   	rupiah = jpy*114.84;
			cout<< "IDR (Indonesian Rupiah) yang didapat : "<< rupiah << " IDR" <<endl;
		//untuk mengulang program atau tidak
		    	cout << "Ingin diulang? (y/n) ";cin>>y;
			  	if (y=='y')
			   	{
			    //untuk clear program supaya rapih
			    system("cls");
			    goto awal;
			    }
			    else{

				}

		}


 		else if(pilih_currency == ('2'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	JPY to USD	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan JPY : ";	cin>> jpy;
		   	usd = jpy*0.0074;
			cout<< "USD (American Dollars) yang didapat : "<< usd << " USD" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
 		else if(pilih_currency == ('3'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	JPY to EUR\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan JPY ";	cin>> jpy;
		   	eur = jpy*0.0070;
			cout<< "JPY (Japanese Yen) yang didapat : "<< eur << " EUR" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
 		else if(pilih_currency == ('4'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	JPY to GBP	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan JPY : ";	cin>> jpy;
		   	gbp = jpy*0.0062;
			cout<< "GBP (Pound Sterling) yang didapat : "<< gbp << " GBP" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
        else if(pilih_currency == ('5'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	JPY to RM	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan JPY : ";	cin>> jpy;
		   	rm = jpy*0.033;
			cout<< "RM (Ringgit Malaysia) yang didapat : "<< rm << " RM" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
        case ('6'):
        system("cls");
    //KONVERSI MATA UANG DARI GBP
        cout<<"==========================\n";
        cout<<"|	RINGGIT MALAYSIA 	  |\n  ";
	    cout<<"==========================\n";
    //pilih mata uang yang ingin dikonversi
	    cout<< "1. RM to IDR\n";
	    cout<< "2. RM to USD\n";
	    cout<< "3. RM to EUR\n";
	    cout<< "4. RM to JPY\n";
	    cout<< "5. RM to GBP\n";
	    cout<< "Masukkan nomor yang dipilih : ";
        cin >>pilih_currency;
    //If else untuk memilih jenis suhu
	    if (pilih_currency == ('1'))
	    {
			system("cls");
			cout<<"===================\n";
			cout<<"=	RM to IDR	 =\n";
		 	cout<<"===================\n";
		  	cout<< "Masukan RM : ";	cin>> rm;
		   	rupiah = rm*3430.15;
			cout<< "IDR (Indonesian Rupiah) yang didapat : "<< rupiah << " IDR" <<endl;
		//untuk mengulang program atau tidak
		    	cout << "Ingin diulang? (y/n) ";cin>>y;
			  	if (y=='y')
			   	{
			    //untuk clear program supaya rapih
			    system("cls");
			    goto awal;
			    }
			    else{

				}

		}


 		else if(pilih_currency == ('2'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	RM to USD	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan RM : ";	cin>> rm;
		   	usd = rm*0.22;
			cout<< "USD (American Dollars) yang didapat : "<< usd << " USD" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
 		else if(pilih_currency == ('3'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	RM to EUR\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan RM ";	cin>> rm;
		   	eur = rm*0.21;
			cout<< "JPY (Japanese Yen) yang didapat : "<< eur << " EUR" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
 		else if(pilih_currency == ('4'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	RM to GBP	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan RM : ";	cin>> rm;
		   	gbp = rm*0.18;
			cout<< "GBP (Pound Sterling) yang didapat : "<< gbp << " GBP" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }
        else if(pilih_currency == ('5'))
		{
		    system("cls");
			cout<<"\t=================\n";
			cout<<"\t=	RM to JPY	 =\n";
		 	cout<<"\t=================\n";
		  	cout<< "Masukan RM : ";	cin>> rm;
		   	jpy = rm*30.08;
			cout<< "JPY (Japanese Yen) yang didapat : "<< jpy << " YEN" <<endl;
			//untuk mengulang program atau tidak
	            cout << "Ingin diulang? (y/n) ";cin>>y;
	            if (y=='y')
	            {
	                system("cls");
	                goto awal;
	            }
	            else{

	            }
        }

    break;

    default:cout<<"Pilihan Tidak Ada \n";
            cout << "Ingin diulang? (y/n) ";cin>>y;
            if (y=='y')
            {
                system("cls");
                goto awal;
            }
            else{

            }
    break;
    }

}
