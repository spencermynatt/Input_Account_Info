//I want to store user input data in the create account function by store in text files and opening them
// NOW WE JUST NEED TO OPEN THE FILE AND PRINT IT if it gives us the option to
#include <iostream>
#include <fstream>

using namespace std;
int num; //account number
string name; //user's name
int money;
string choice;
class INFO{
public:

void  user_info();
int display();

string remove_account();



private:







};


void user_info(){
fstream Banks_Information; //this is an instance
Banks_Information.open("information.txt", ios::out); //ios out opens the program to write on





while(choice != "yes")
{
cout << "Enter a number you want for the account";
cin >> num;
cout << "Enter your Name";
cin >> name;
cout << " Enter your starting amount" << endl;
cin >> money;


Banks_Information << "Account No."<< num <<" " <<"Name: "<< name + " "<< " "<< " Money Deposited: " << money<< "\n" <<endl;



cout << " do you want to exit back to main program?" << endl;
cin >> choice;
if(choice == "yes")
{


cout << "thank you" << endl; //for now break the program
Banks_Information.close();
break;


}



}

}
int display(){

    fstream Banks_Information;
    Banks_Information.open("information.txt");
string x;

if(Banks_Information.fail()){


    cout << " error" << endl;
}
else if(Banks_Information)
{

system("cls");

   while(Banks_Information >> x) // >> right shifts the bits of the first operand, the second operand decides the number of places to shift.
    //string is one byte
    // x's binary form is 01111000

    //(without the new account information added) banks information's binary form is 01000001 01100011
    //01100011 01101111 01110101 01101110 01110100 00100000 01001110 01101111 00101110
    //00100000 01111100 01111100 00100000 00100000 01001110 01100001 01101101
    //01100101 00100000 00100000 00100000 00100000
    // 00100000 00100000 00100000
    //01111100 01111100
    // 00100000 01001101
    //  01101111 01101110
     // 01100101 01111001 00100000
     // 01000100 01100101 01110000
    //  01101111 01110011 01101001 01110100
     // 01100101 01100100 00001010 00001010


     //in this code we are asking bank information to shift it's binary to the right once, which completely changes it's value
   {

       cout << " "<< x  << "\n";


       }
       system("pause");
       return 0;

}




};

string remove_account()
{
    cin.ignore();
string deleteline;
string line;
ifstream info("information.txt");



if(!info.is_open())


{
	cout << "error";


}
ofstream new_info("newinfo.txt");
cout << "enter a name to remove" << endl;
cin >> deleteline;
getline(info, line);
while(getline(info,line)) //this loops through the entire program until it finds the string delete line which is not what we need
{

	if(deleteline== line)
    {
       cout << "here";
    }
    getline(info,line);
}
info.close();
new_info.close();
remove("information.txt");
rename("newinfo.txt", "information.txt");
cout<< "done" << endl;
system("pause");











}


int main(){
    system("cls");
    int choice;

cout<< "Enter 1: creation of account" << endl;
cout<< "Enter 2: display accounts" << endl;
cout<< "Enter 3: clear accounts" << endl;

cin >> choice;
switch(choice)
{
    case 1:
    user_info();
    main();
    case 2:
        display();
        system("pause");

        main();

    case 3:
        remove_account();
        system("pause");
        main();
}







}
