//Name: Priyanka Yeole
#include<iostream>
#include<fstream>
using namespace std;
bool isLoggedIn(){
    string username,password,un,pw;

    cout<<"Enter Username- ";cin>>username;
    cout<<"Enter Pasword- ";cin>>password;

    ifstream fin("C:\\priyanka\\programs\\data.txt");
    getline(fin,un);
    getline(fin,pw);

    if(un == username && pw == password){
        return true;
    }
    else{
        return false;
    }
}
 int main(){
    int choice;
    cout<<"1. Register\n2. Login\nEnter Your Choice- ";
    cin>> choice;

    if(choice == 1){
        int username, password;
        cout<<"Enter username- ";cin>>username;
        cout<<"Enter password- ";cin>>password;
        ofstream fout("C:\\priyanka\\programs\\data.txt");
        fout<<username<<endl<<password;
        fout.close();
    }

    else if(choice == 2){
        bool status = isLoggedIn();
        if(!status){
            cout<<"Login Failed!!"<<endl;
            system("PAUSE");
            return 0;
        }
        else{
            cout<<"Successfully Logged In!"<<endl;
            system("PAUSE");
            return 1;
        }
    }
 }
