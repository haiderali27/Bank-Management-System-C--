#include<iostream>
#include<conio.h>
#include<string>
#include<ctime>
#include<fstream>
#include<limits>
#include<stdio.h>
#include<cstdlib>
using namespace std;
time_t now = time(0);
char* dt = ctime(&now);
int attempts=0;
int transactions;
char choice;
int filled;


void welcomeMsg();
void verify();
void menu();
void lock();


class information{

    protected:
    string name;
    int Acctno;
    char type;
    float balance;
    public:

        void getdata(int tot){
      cout<<"\a";
					system("CLS");
					cout<<"\t\t\t**********************\n\n";
					cout<<"\t\t\t Edit Account\n\n";
					cout<<"\t\t\t**********************\n\n";
					Acctno=tot;
					cout<<" Account Number  \t"<<Acctno<<endl;
					cout<<"Enter the Account Type (C/S)\t"<<endl;
					cin>>type;
					if ((type=='C'|| type=='S')){
					cout<<"Enter the new amount (Minimum 100)"<<endl;
					cin>>balance;
					if(balance >= 100){

					cout<<"Enter name"<<endl;

					cin.ignore(1000, '\n');
					getline(cin,name);


}

else
{
                  cout<<"\n\nAccount cannot be modified with amount less than 100";}
}
else
{
                  cout<<"\nPlease Enter Correct type and Try again\n";}
}



void create(){
		cout<<"\a";
					system("CLS");
					cout<<"\t\t\t**********************\n\n";
					cout<<"\t\t\t Create Accounts\n\n";
					cout<<"\t\t\t**********************\n\n";
                    Acctno=filled+1;

					cout<<" Account Number  \t"<<Acctno<<endl;

					cout<<"Enter the Account Type (C/S)\t"<<endl;
					cin>>type;
					if ((type=='C'|| type=='S')){
					cout<<"With how much amount will you open the account (Minimum 100)"<<endl;
					cin>>balance;
					if(balance >= 100){

					cout<<"Enter name"<<endl;

					cin.ignore(1000, '\n');
					getline(cin,name);



ofstream myfile;
                   myfile.open ("Accounts.txt",ios::app);
                   myfile <<Acctno<<"\n"<<type<<"\n"<<name<<"\n"<<balance<<"\n";
                   myfile.close();



                   cout<<"\nYour Account Number is \t"<<Acctno<<"\n\n";

                   cout<<"Your Account Type is \t "<<type<<endl<<endl;

                   cout<<"Name of The Account Holder is \t"<<name<<"\n\n\n";



                   filled++;
                   ofstream out("index.txt");  //create output file object
                   out<<filled;




}

else
{
                  cout<<"\n\nAccount cannot be created with amount less than 100";}
}
else
{
                  cout<<"\nPlease Enter Correct type and Try again\n";}

menu();
	cout<<"\a";




}

void view(){
		cout<<"\a";
			system("CLS");
			cout<<"\t\t\t**********************\n\n";
			cout<<"\t\t\t  View Accounts\n\n";
			cout<<"\t\t\t**********************\n\n";


			cout<<"\n\n\nTotal Accounts filled are \t"<<filled;
			cout<<"\n\nEnter the account you want to search\n\n";
			int c;
			cin>>c;
        if(c>filled){
            cout<<"Records does not Exist"<<endl;
            system("pause");
            menu();
        }
			        ifstream in("Accounts.txt");
        if(!in){
            cout<<"File opening error";
            exit(1);
        }
for(int j=0;j<c;j++){
        in>>Acctno;
        in>>type;
        in>>name;
        in>>balance;
}

in.close();


			cout<<"\n\n\nInformation is as Below\n\n\n";
			cout<<"Your account number is \t"<<Acctno<<"\n\n";


		    cout<<"\n\n\n The Type is ";
			cout<<type<<"\n\n\n";
			cout<<"\n\n\nAccount Balance is is  ";
			cout<<balance<<"\n\n\n";
			cout<<"\n\n\nAccount holder Name is  ";


			cout<<name;


getch();
system("CLS");
menu();
}

void read(int c){

			        ifstream in("Accounts.txt");
        if(!in){
            cout<<"File opening error";
            exit(1);
        }
for(int j=0;j<c;j++){
        in>>Acctno;
        in>>type;
        in>>name;
        in>>balance;
}

in.close();
}
 void savedata(){
    ofstream write;
    write.open("Accounts.txt",ios::app);
    write<< Acctno<<endl;
    write<< type<<endl;
    write<< name<<endl;
    write<< balance<<endl;
    write.close();
    }
     void cleardata(){
  ofstream ofs;
  ofs.open("Accounts.txt", ofstream::out | ofstream::trunc);
  ofs.close();

  }
  void modify(){
  information records[50];

             int mod;
            for(int i=0;i<filled;i++){
                records[i].read(i+1); //it reads data object by object from file

            }
             cout<<"Enter which record number you want to modify :";
              cin>>mod; //which object number you want to modify ?
cin.ignore();
              records[mod-1].getdata(mod); // modify the entered mod number object

              records[mod].cleardata(); //clear all data from object


            for(int j=0;j<filled;j++){

                    records[j].savedata(); //rewrite it from beginning object by object

                 }
cout<<"\a";
menu();
  }
   void ball(float a){
        balance=a;
        }
};


class trans:public information{
    protected:
    int id;
    char type;
    float amount;
    string date;
    public:

         void modify(int a,float b){
  information records[50];


            for(int i=0;i<filled;i++){
                records[i].read(i+1); //it reads data object by object from file

            }
              records[a-1].ball(b); // modify the entered mod number object

              records[a-1].cleardata(); //clear all data from object


            for(int j=0;j<filled;j++){

                    records[j].savedata(); //rewrite it from beginning object by object

                 }
  }
        float bal(int c){
        ifstream in("Accounts.txt");
        for(int i=0;i<c;i++){
           string nu;
           in>>nu; //
           in>>nu;
           in>>nu;
           in>>balance;

        }
        float b=balance;
        return b;
        }
void withdraw()

{
		cout<<"\a";
			system("CLS");
			cout<<"\t\t\t**********************\n\n";
			cout<<"\t\t\t\tWithDraw\n\n";
			cout<<"\t\t\t**********************\n\n";


			int l;
			float with;
			cout<<"\n\nEnter the Account for which you want to WithDraw\n\n";
			cin>>l;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
	if(l<=filled)
	{

			Acctno=l;
			cout<<"\n\nEnter the Amount  you want to WithDraw\n\n";
			cin>>with;
trans x;
balance=x.bal(Acctno);
	if(balance > with)

	{
			cout<<"\n\n\nTransaction ID is\t"<<transactions;

			id=transactions;

			type='W';


			balance=balance-with;
			amount=with;
			date=dt;

ofstream myfile;
			myfile.open ("Transactions.txt",ios::app);
			myfile <<id<<"\n"<<Acctno<<"\n"<<type<<"\n"<<amount<<"\n"<<date;
			myfile.close();

			cout<<"\n\nYour new Balance is \t"<<balance<<"\n\n\n";


	}
	else

	{
            cout<<"\n\n\nYour balance is too low to WithDraw the given Amount\n\n\n";
menu();
	}


	}
else

	{
			cout<<"Account Not Found Enter The Correct Account Number";

	}




			cout<<"\n\n\nTRANSACTION HAS BEEN PROCESSED on\t"<<date<<"\n\n\n";
			cout<<"\n\nThe amount you have withdrawn is\n\n"<<with;
			transactions++;
			ofstream out("indext.txt");  //create output file object
            out<<transactions;
            trans x;
            x.modify(Acctno,balance);
			menu();

}
        void deposit()
{
		cout<<"\a";
			system("CLS");
			cout<<"\t\t\t**********************\n\n";
			cout<<"\t\t\t\tDeposit\n\n";
			cout<<"\t\t\t**********************\n\n";

			int k;
			cout<<"\n\n\nEnter the Account Number for which you want to deposit\n\n";

			cin>>k;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		if(k<=filled)
		{
           float deeh;
           Acctno=k;
           cout<<"\n\n\nTransaction ID is\t"<<transactions;
            id=transactions;
			type='D';
			cout<<"\n\nEnter the amount  you want to deposit\n\n";
			cin>>deeh;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			amount=deeh;
            date=dt;
            trans x;
            balance=x.bal(Acctno);
            balance+=deeh;
            ofstream myfile;
			myfile.open ("Transactions.txt",ios::app);
			myfile <<id<<"\n"<<Acctno<<"\n"<<type<<"\n"<<amount<<"\n"<<date;
			myfile.close();
			cout<<endl<<endl<<balance;
			cout<<"\n\n\nTRANSACTION HAS BEEN PROCESSED on\t"<<date<<"\n\n\n";
			cout<<"\n\nThe amount you have deposited is\n\n"<<deeh;
			cout<<"\n\nThe transaction for account\t"<<k;




			cout<<"\n\nYour new Balance is \t"<<balance<<"\n\n\n";
			transactions++;
			ofstream out("indext.txt");  //create output file object
            out<<transactions;
x.modify(Acctno,balance);
		}
     else

	 {
			cout<<"\n\n\nAccount not found\n\n\n";


		}
menu();

}
};
class tfunds:public trans,public information{
    protected:
    int Acctno1;
    int Acctno2;
    float tamount;
    string date;
    public:
        void transfer()
{
		cout<<"\a";
		int ch1, ch2;
		float amount;
	float balance1,balance2;
						cout<<"\nEnter the account number from which you want to transfer funds\n\n";
						cin>>ch1;
						Acctno1=ch1;
						trans x;
                        balance1=x.bal(Acctno1);
						cout<<"\nEnter the amount for transferring\n";
						cin>>amount;
		if(balance1>=amount)

		{
					    cout<<"\nEnter the account number to which you want to transfer funds\n";
						cin>>ch2;
						Acctno2=ch2;
						balance2=x.bal(Acctno2)+amount;
						balance1-=amount;
						tamount=amount;
						date=dt;
ofstream myfile;
						myfile.open ("Funds Transfer.txt",ios::app);
						myfile <<Acctno1<<"\t"<<tamount<<"\t"<<Acctno2<<"\t"<<date<<"\n";
						myfile.close();
						cout<<"\nAccount Number\t Amount\tAccount Number\t Date \n ";
						cout <<Acctno1<<"\t\t"<<tamount<<"\t\t"<<Acctno2<<"\t"<<date<<"\n";
						cout<<"\nFUNDS TRANSFERRED\n";

		}

	else


	{
	cout<<"\n Amount unsufficient \n";

		}
x.modify(Acctno2,balance2);
x.modify(Acctno1,balance1);

menu();

}


};

void welcomeMsg()
{

					cout<<"WELCOME TO BANK MANAGEMENT SYSTEM"<<endl;


					cin.get();


					system("CLS");
					cout<<endl<<endl;
					cout<<"\t\t\t*************************************\n\n";
					cout<<"\n\t\t\t\tBANK MANAGMENT SYSTEM\n\n";
					cout<<"\n\t\t\t*************************************\n\n";
					cout <<endl<< "The Local Date and Time is : " << dt << endl;
					cout<<"\n\nPress 'Enter' to continue"<<endl;
					cin.get();
}
void verify()

{
		cout<<"\a";
				string emp;
				system("CLS");
				cout<<"\n\nPlease Enter The Password (Case Sensitive)\n\n";
		if (attempts<=3)
		{
	string user;
	int i=0;
	char password[50]="";
	string str="haiderboy";
	char ch;

 while(1)


 {
				ch=_getch();
				if(ch=='\b')

				{
				cout <<"\b \b";
						if (i>0)
					{

						password[i--]='\0';

					}

				}
		else if (ch=='\n'||ch=='\r')

		{
			password[i]='\0'; break;
		}
		else
		{
			password[i]=ch; i++;cout<<"*" ;
		}

 }





		if (password==str)

		{

	                   cout <<"\n \n\nPassword Accepted\n\n";
a:
						cout<<"Please Enter Your First Name : ";
						cin>>user;
                        cout<<"Please Enter Your Private Employee ID : ";
						cin.ignore(1000,'\n');
						getline(cin,emp);

			if((user=="HaiderBoy" && emp=="HaiderBoy123") || (user=="Haider"&&emp=="Haider123"))
{


						cout<<"\n\n\t\t **** Welcome **** \t\n\n\t\t\t"<<user;


						menu();

			}

		else

		{
						cout<<"\n\nUnauthorised User\n\nEnter your information again";
                        goto a;
						}

		}
		else

		{

			attempts++;
						system("CLS");
						cout<<"\n\nIncorrect Password Try Again\n\n";
						cout<<"\n\nPress Any Key To Retry\n\n";
			_getch();
		verify();


		}

		}
	else

	{
						cout<<"\n\nToo much attempts \n\n";

						cout<<"\nProgram will exit \n\n";
			system("pause");
			exit (0);

		}


}
void menu()
{
		cout<<"\a";
				 cout<<"\n\n\n\t\t\t\t"<<"Main Menu\n\n\n";
				 cout<<"Press 'A' for Creating an account \n\n";
				 cout<<"Press 'B' for Viewing an account \n\n";
                 cout<<"Press 'C' for Depositing funds \n\n";
                 cout<<"Press 'D' for with drawing funds \n\n";
                 cout<<"Press 'E' for pulling account statments \n\n";
                 cout<<"Press 'F' to Lock the System \n\n";
                 cout<<"Press 'G' to transfer funds\n\n";
                 cout<<"Press 'M' to modify personal information of account \n\n";
                 cout<<"Press 'X' to Exit the application";
                 choice=_getch();
switch(choice){

case 'A':

		{
		    information x;
			x.create();

		}

break;

case 'B':
		{
            information x;
			x.view();

		}
break;

case 'C':

		{
            trans x;
			x.deposit();

		}
break;

case 'D':

		{
		    trans x;
		x.withdraw();


		}
break;

case 'E':
		{

			//statments();

		}

break;

case 'F':
		{
			cout<<"\n\nSystem is locked Now\n\n";
			lock();

		}
break;

case 'G':
		{
        tfunds x;
		x.transfer();

		}

break;
case 'M':{
    information x;
    x.modify();

}break;
case 'a':

		{
		    information x;
			x.create();

		}

break;

case 'b' :
		{
           information x;
			x.view();

		}
break;

case 'c':

		{
            trans x;
			x.deposit();

		}
break;

case 'd':

		{
		    trans x;
			x.withdraw();


		}
break;

case 'e':
		{

			//statments();

		}

break;

case 'f':
		{
			cout<<"\n\nSystem is locked Now\n\n";
			getch();
 			lock();

		}break;

case 'g':
		{
tfunds x;
		x.transfer();

		}

break;
case 'm':{
   information x;
   x.modify();

}break;
case 'X':{cout<<endl<<endl; exit(1);}break;
case 'x':{cout<<endl<<endl; exit(1);}break;
default:
		{
			cout<<"\n\n\nYou have Entered Wrong Option\n\n\n";}
			getch();
			menu();
break;
		}

}




void lock(){
		cout<<"\a";
	    verify();
	       }




int main(){
  ifstream input("index.txt");
  ifstream in("indext.txt");
  in>>transactions;
  input>> filled;
  welcomeMsg();
  verify();
  menu();
  getch();
  return 0;
        }

