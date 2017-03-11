//
//  main.cpp
//  Chapter18Exercise01
//
//  Created by Fangming Zheng on 3/11/17.
//  Copyright © 2017 Fangming Zheng. All rights reserved.
//

/*Implement a small address book program that allows users to enter names and email addresses, remove or change entries,
 and list the entries in their address book. Don't worry about saving the address book to disk; it's ok to lose the data
 when the program exits*/

#include <iostream>
#include <map>
#include <string>


using namespace std;

int main()
{
    int choice;
    string name;
    string email_address;
    map<string, string> name_to_email;
    cout << " Please make a choice: 1) enter name and email address. 2) remove an entry. 3) change an entry. 4) list the entries in the adress book" << endl;
    cin >> choice;
    switch (choice)
    {
        case 1:
            cout << "enter the user name: " << endl;
            cin >> name;
            name_to_email[name];
            cout << "enter the email address for " << name << endl;
            cin >> email_address;
            name_to_email[name] = email_address;
            break;
        
        case 2:
            cin >> name;
            map<string,string>::iterator itr = name_to_email.find(name);
            if (itr != name_to_email.end())
            {
                name_to_email.erase(name);
                cout << name << " has been removed from the email book" << endl;
            }
            break;
        
        case 3:
            string temp_email;
            cout << "enter the name you want to edit" << endl;
            cin >> name;
            map<string,string>::iterator itr2 = name_to_email.find(name);
            if (itr != name_to_email.end())
            {
                cout << "the new email address" << endl;
                cin >> temp_email;
                itr2->second = temp_email;
                cout << "the new address for " << name << " is" << itr2->second << endl;
              
            }
            break;
            
        case 4:
      
            for(map<string, string>::iterator itr3 = name_to_email.begin(),
                end = name_to_email.end();
                itr3 != end;
                ++itr3)
            {
                cout << itr3->first << "---> " << itr3->second << endl;
            }
            break;
        default:
            cout << "please try again";
            cout << " Please make a choice: 1) enter name and email address. 2) remove an entry. 3) change an entry. 4) list the entries in the adress book" << endl;
            cin >> choice;
            
            
    }
    
    
    
    
    return 0;
    
}
