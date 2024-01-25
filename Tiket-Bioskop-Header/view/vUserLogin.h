#include "../model/mLogin.h"

using namespace std;

void vUserLogin(){
    string inptUsernameLogin;
    string inptEmailLogin;
    string inptPasswordLogin;

    cout<<"Masukan Username   : ";
    cin>>inptUsernameLogin;
    cout<<"Masukan Email      : ";
    cin>>inptEmailLogin;
    cout<<"Masukan Password   : ";
    cin>>inptPasswordLogin;

    mUserLogin(inptUsernameLogin, inptEmailLogin, inptPasswordLogin);
}

void login(string& loginNamaPengguna) {
    string enteredUsername, enteredEmail, enteredPassword;


    do {
        cout << "==========================================\n";
        cout << "             - USER LOGIN -                \n";
        cout << "==========================================\n";
        cout << "Enter Username\t: ";
        cin >> enteredUsername;
        cout << "Enter Email\t: ";
        cin >> enteredEmail;
        cout << "Enter Password\t: ";
        cin >> enteredPassword;

        int userIndex = mSearchUser(enteredUsername);

        if (userIndex != -1 && emailLogin[userIndex] == enteredEmail && passwordLogin[userIndex] == enteredPassword) {
            cout << "Login successful!\n";
            loginNamaPengguna = enteredUsername;
            return; // Exit the login function
        } else {
            cout << "Invalid credentials. Please try again.\n";
        }
    } while (true);
}

void vViewUserLogin(){
    mViewUserLogin();
}

void vSearchUser(){
    string inputUsernameLogin;

    cout<<"Masukan Username : ";
    getline(cin, inputUsernameLogin);

    int index = mSearchUser(inputUsernameLogin);
        if(index != -1){
            cout<<"==========================================\n";
            cout<<"            - DATA DITEMUKAN -             \n";
            cout<<"==========================================\n";
            cout<<setw(20)<<left<<"Username"<<setw(15)<<"Email"<<endl;
            cout<<"==========================================\n";
            cout<<setw(20)<<left<<usernameLogin[index]<<setw(15)<<emailLogin[index]<<endl;
        } else{
            cout<<"Data Tidak Ditmukan";
        }
}