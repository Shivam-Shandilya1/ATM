#include<iostream>
using namespace std;
int main()
{

    int option,balance=50,deposit,withdraw;
    do{
    cout<<"**************************************MENU****************************************************************"<<endl;
    cout<<"1.  BALANCE   "<<endl;
    cout<<"2.  DEPOSIT    "<<endl;
    cout<<"3.  WITHDRAWAL"<<endl;
    cout<<"4.  EXIT   "<<endl;
    cout<<"Choose the following option number"<<endl;
    cin>>option;
     system("cls");
    switch(option)
    {case 1:cout<<"********************* BALANCE************************"<<endl;cout<<"You have "<<balance<<" Ruppees." <<endl;break;
    case 2: cout<<"******************************** DEPOSIT***********************"<<endl;
    cin>>deposit;
    balance=balance+deposit;
    cout<<"You have "<<balance<<" Ruppees."<<endl;break;
    case 3:cout<<"***************************WITHDRAWAL************************************"<<endl;
    cout<<"You want to withdraw :";
    cin >> withdraw;
    if(withdraw<=balance)
        { cout<<"Your withdraw is Successfull.Now Your Balance :-";
        balance=balance-withdraw;
        cout<<balance<<" Ruppees"<<endl;
    }else{cout<<"Invalid"<<endl;}break;

    }
}while(option!=4);
return 0;
}
