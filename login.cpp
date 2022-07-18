//Name: Priyanka Yeole
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
bool isLoggedIn(){
    string username,password;
    bool isFound1 = 0;
    bool isFound2 = 0;

    cout<<"Enter Username- ";cin>>username;
    cout<<"Enter Pasword- ";cin>>password;

    ifstream fin("C:\\priyanka\\programs\\data.txt");
    while(!fin.eof()){
        string temp;
        getline(fin,temp);
        if(temp.compare(username) == 0){
            isFound1 = 1;
        }
        if(temp.compare(password) == 0){
            isFound2 = 1;
            return true;      
            break;
        }
        if(isFound1){
            isFound1 = 0;
        }
    }
    if(!isFound2)
	{		
        return false;
	}

}
 int main(){
    int choice;
    cout<<"1. Register\n2. Login\nEnter Your Choice- ";
    cin>> choice;

    if(choice == 1){
        string username,password;
        cout<<"Enter Username- ";cin>>username;
        cout<<"Enter Pasword- ";cin>>password;
        ofstream fout("C:\\priyanka\\programs\\data.txt", ios::app);
        fout<<username<<endl<<password<<endl;
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
