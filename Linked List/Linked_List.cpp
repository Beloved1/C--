#include <iostream>
#include "List.h"

using namespace std;


int main()
{
    
    //cout << "VS CODE\n";
    list List;
    List.addNode(5);
    List.addNode(3);
    List.addNode(1);
    List.addNode(7);
    List.addNode(20);


    List.printList();

    cout << endl;
    List.revList();
    List.deleteNode(76);


    List.printList();

    List.search(10);

   
    
    return 0;
}