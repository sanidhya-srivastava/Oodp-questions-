#include <iostream>

using namespace std;

const int MAX_ITEMS = 100; 

class InventoryManager
{
	private:
	    int itemCount=0;                
	    int itemIds[MAX_ITEMS];        
	    string itemNames[MAX_ITEMS];  
	
	public:
	    void addItem(int itemId, string itemName) {
	        if (itemCount < MAX_ITEMS) {
	            itemIds[itemCount] = itemId;
	            itemNames[itemCount] = itemName;
	            itemCount++;
	            cout << "Item " << itemName << " with ID " << itemId << " added to the inventory." << endl;
	        }
			else
			{
	            cout << "Inventory is full. Cannot add more items." << endl;
	        }
	    }
	
	    void displayInventory() 
		{
	        if (itemCount == 0) {
	            cout << "Inventory is empty." << endl;
	        }
			else 
			{
	            for (int i = 0; i < itemCount; i++)
				{
	                cout << "ID: " << itemIds[i] << ", Name: " << itemNames[i] << endl;
	            }
	        }
	    }
};

int main() 
{
    InventoryManager ob;
    int ch;
    int id;
    string name;
    do
    {
        cout << "the menu is " << endl;
        cout << "1. add item"<< endl;
        cout << "2. Display inventory" << endl;
        cout << "3. exit" << endl;
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"enter item id ";
            cin>>id;
            cin>>name;
            ob.addItem(id,name);
            break;
            case 2:  cout<<"displaying the inventory: "<<endl;
            ob.displayInventory();
            break;
            case 3:  cout<<"exiting the menu"<<endl;
            break;
            default:  cout<<"invalid choice";
            break;
        }
    }while(ch!=6);
    return 0;
}
