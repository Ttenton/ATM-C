//Trenton Smith ----- 11/17/2021---- 6:54pm. 

//ATM C++ Code. 

 
 

#include <iostream> 

#include <string> 

#include<cstdlib> 

using namespace std; 

 
 

int main(){ 

     

int pin; 

int password = 2424; 

int choice; 

double deposit = 0.0; 

double withdraw = 0.0; 

double balance = 0.0; 

int count = 0; 

bool isTrue = true; 

 
 

 
 

 
 

do  

{ 

    // Allows pin to be continuously executed 

 
 

    cout<< "************ Welcome to X Bank ************\n"; 

    cout << "Enter your pin:\n"; 

    cin >> pin; 

     

    if (pin == password) 

    { 

         

    // ATM options 

     

    do{ 

         cout << "************ Welcome to X Bank ************\n"; 

        cout << "1. Withdraw\n"; 

        cout << "2. Deposit\n"; 

        cout << "3. Balance\n"; 

        cout << "4. Exit\n"; 

     

    cout << "Select preferable option:\n"; 

    cin >> choice;   

     

    switch (choice) 

    { 

         

        //Allowing user to choose options. 

         

        case 1: 

         

        cout << "Withdraw preferred amount:\n"; 

        cin >> withdraw; 

        balance = balance - withdraw; 

         

         

        break; 

         

        case 2: 

         

        cout << "Deposit preferred amount:\n"; 

        cin >> deposit; 

        balance = balance + deposit; 

         

            break; 

         

        case 3: 

         

        cout << "Current balance: $\n" << balance; 

       

            break; 

         

        case 4: 

         

        cout << "Thank you for banking with X Bank !"; 

         

        isTrue = false; 

            break; 

    } 

         

         

    }while (isTrue != false); 

         

     

        

         

    }else  

     

    { 

        count++; 

        if (count == 3){ 

             

            isTrue = false; 

             

        }else 

        { 

             

            cout << "Wrong Pin!\n"; 

        } 

    } 

     

} while(isTrue != false); 

 
 

     

     

 
 

    return 0; 

} 

 
