#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void login();
void registration();
void forget();

int main(){
int choice;
cout<<"\t\t\t___________________________________________\n\n\n";
cout<<"\t\t\t                 WELCOME TO THE LOGIN PAGE              ";
cout<<"\t\t\t________________ MENU_____________________"<<endl;
cout<<"\t\t\t press 1 to Login                    |"<<endl;
cout<<"\t\t\t press 2 to Registration             |"<<endl;
cout<<"\t\t\t press 3 if you forget the password  |"<<endl;
cout<<"\t\t\t press 4 to exit                     |"<<endl;
cout<<"\n\t\t\t please enter your choice          |"<<endl;
switch(choice){
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        forget();
        break;
    case 4:
        cout<<"\t\t\t Thank you"<<endl;
    default:
        system("cls");
        cout<<"\t\tplz select from the option given"<<endl;

}

}
void login(){
    int count;
    string userid,password,id,pass;
    system("cls");
    cout<<"\t\t\t plz enter the username and password";
    cout<<"USERNAME";
    cin>>userid;
    cout<<"PASSWORD";
    cin>>password;
    //it is used to read the data
    ifstream input("records.txt");
    while(input>>id>>pass){
        if(id==userid && pass==password){
           count=1;
           system("cls");

           
        }

    }
    input.close();
    if(count=1){
        cout<<"\t\t your sucessfull login "<<endl;
        main();
    }
    else{
        cout<<"\t\t something is wrong"<<endl;
    }
}
void registration(){
    string ruserid,rpassword,rid,rpass;
    system("cls");
    cout<<"\t\t\t Enter the username"<<endl;
    cin>>ruserid;
    cout<<"\t\t\t Enter the password"<<endl;
    cin>>rpassword;
    //to input or enter the data
    ofstream f1("record.txt",ios::app);
    f1<<ruserid<<' '<<rpassword<<endl;
    system("cls");
    cout<<"\t\t\t Registration is successfull"<<endl;
    main();

}
void forget(){
    int option;
    system("cls");
    cout<<"\t\t\t You forget the password"<<endl;
    cout<<"press 1 to search the userid "<<endl;
    cout<<"press 2 to go backto main menu"<<endl;
    cout<<"\t\t\t Enter yout option"<<endl;
    cin>>option;
switch(option)
    {
        
    case 1:
    {
    int count=0;
    string suserid,spassword,sid,spass;
    ifstream f2("record.txt");
    while(f2>>sid>>spass){
        if(sid==suserid){
            count=1;
                
            }
        }
        f2.close();
        if(count==1){
            cout<<"\t\t your accunt is found"<<endl;
            cout<<"\t\t your password is is "<<spass<<endl;
        }
        else{
            cout<<"your account is not found"<<endl;
            main();
        }
        break;}
        case 2:
        {
            main();
        }
        default:
        cout<<"\t\t wrong choice ! please try again"<<endl;
    }
}
