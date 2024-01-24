#include "../database/dbLogin.h"
#include <iomanip>

using namespace std;

void mUserLogin(string inptUsernameLogin, string inptEmailLogin, string inptPasswordLogin){
    usernameLogin[indexLogin] = inptUsernameLogin;
    emailLogin[indexLogin] = inptEmailLogin;
    passwordLogin[indexLogin] = inptPasswordLogin;
    indexLogin++;
}

void mViewUserLogin(){
    cout<<"==========================================\n";
    cout<<"            - DATA USER -             \n";
    cout<<"==========================================\n";
    cout<<setw(20)<<left<<"Username"<<setw(15)<<"Email"<<endl;
    cout<<"==========================================\n";
    for(int i = 0; i < indexLogin; i++){
        cout<<setw(20)<<left<<usernameLogin[i]<<setw(15)<<emailLogin[i]<<endl;
    }
    cout<<"==========================================\n";
}

int mSearchUser(string inptUsernameLogin){
   int index;
   for(int i = 0; i < indexLogin; i++){
        if(usernameLogin[i] == inptUsernameLogin){
            return i;
            //break;
        }
   }
   return -1;
}   


