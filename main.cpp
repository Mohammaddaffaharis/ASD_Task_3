#include <iostream>
#include "list.h"
#include "operation.h"
#include "my_data.h"

using namespace std;

void mainMenu();
List L, L_passed;

int main() {
    createList(L);
    createList(L_passed);

    mainMenu();

    return 0;
}

void mainMenu() {
    address P;
    infotype x;
    mytype data;
    List L2;
    /**
    * IS : List has been created
    * PR : prints menu to user
    *       1. insert new data
    *       2. print all data (List L)
    *       3. find and print a data by ID
    *       4. edit data by ID
    *       5. delete data by ID
    *       6. separate passed member
    *       7. print all data (List L2)
    *       0. exit
    */
    //-------------your code here-------------
    int choice;
    do {
        cout<<"Menu"<<endl;
        cout<<"1. insert"<<endl;
        cout<<"2. view member"<<endl;
        cout<<"3. find and view"<<endl;
        cout<<"4. find and edit"<<endl;
        cout<<"5. find and delete"<<endl;
        cout<<"6. separate passed member"<<endl;
        cout<<"7. view passed member"<<endl;
        cout<<"0. exit"<<endl;
        cout<<"input choice: ";
        cin>>choice;
        switch(choice) {
        case 1:
            x = create_data();
            insertAndSort(L,x);
            break;
        case 2:
            printInfo(L);
            break;
        case 3:
            cout << "ID yang dicari : ";
            cin >> data.ID;
            P = findElm(L, data);
            if(P == NULL){
                cout << "ID Not Found.";
            } else {
                data = info(P);
                view_data(data);
            }
            break;
        case 4:
            cout << "ID yang ingin diubah : ";
            cin >> data.ID;
            P = findElm(L, data);
            if (P == NULL){
                cout << "ID Not Found.";
            } else {
                edit_data(data);
                info(P) = data;
            }
            break;
        case 5:
            if(first(L)!=NULL){
                cout << " Delete ID : ";
                cin >> x.ID;
                cout<<endl;
               deletebyID(L,x.ID);
                cout<<"Data Deleted"<<endl;
            }else{
                cout<<"List is Empty"<<endl;
            }
            break;
        case 6:
            savePassedMember(L,L2);
            break;
        case 7:
            cout<<"Passed Member : ";
            printInfo(L2);
            break;
        case 0:
            cout<<"EXIT..."<<endl;

            break;
        }

    } while(choice!=0);

    //----------------------------------------
}
