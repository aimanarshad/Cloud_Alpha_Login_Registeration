#include <iostream>
using namespace std;
void createAccount(string detail[6]){

	
	cout<<"enter your email"<<endl;
	cin>>detail[0];
	
	
	cout<<"create password"<<endl;
	cin>>detail[1];
	
	
	cout<<"Enter Your name"<<endl;
	cin>>detail[2];
	
	
	cout<<"Enter Father name"<<endl;
	cin>>detail[3];
	
	
	cout<<"enter phone number"<<endl;
	cin>>detail[4];
	
	
	cout<<"Enter your date of birth"<<endl;
	cin>>detail[5];
	
	cout<<"------------------CONGRATS YOUR ACCOUNT SUCCESSFULLY CREATED-----------"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
}
void database(const string detail[6]){
	string label[6]={
	"Email: ",
	"Password:",
	"Name:",
	"Father name:",
	"Phone number:",
	"Date of birth"};
	cout<<"ACCOUNT DETAILS"<<endl;
	for(int i=0;i<6;i++){
		cout<<label[i]<<detail[i]<<endl;
	}
	
}
void loginPage(const string detail[6]){
	cout<<"-------------LOGIN TO YOUR ACCOUNT NOW --------------"<<endl;
	cout<<endl;
	string email=detail[0];
	string password=detail[1];
	
	string UserId;
	cout<<"Enter username Email"<<endl;
	cin>>UserId;
	if(UserId==email){
		cout<<"correct email"<<endl;
		cout<<endl;
	}
	string Password;
	
	cout<<"Enter Password "<<endl;
	cin>>Password;
	if(Password==password){
		cout<<"sucessfully login"<<endl;
		cout<<endl;
		database(detail);
		
	}
	else{
		cout<<"Incorrect Password"<<endl;
	}
	
}

int main(){
	string detail[6];
	createAccount(detail);
	
	loginPage(detail);
	return 0;
}
