#include <iostream> //THIS PROGRAM USES OBJECT ORIENTED PROGRAMING FOR SHOPS TO ENTER THE ITEMS PRICES
using namespace std;

class items//Declaration of Class
{
    string name[100];
    int itemId[100];
    int price[100];
    int counter;

public:
    void initcouter() { counter = 0; }//Making the initial counter zero
    void setPrice();//Set the price of the item
    void DisplayItems();//Display the item id and its price
};

void items::setPrice()
{
    cout << "Enter the name of the item no." << counter + 1 <<" : ";
    cin >> name[counter];

    cout << "Enter the id of the item no." << counter + 1 <<" : ";
    cin >> itemId[counter];

    cout << "Enter the price of item no." << counter + 1 <<" : ";
    cin >> price[counter];
    counter++;
}

void items::DisplayItems()
{
    for (int i = 0; i < counter; i++)
    {
        cout <<endl<< "The price of "<<name[i]<< " and item id " << itemId[i] << " is " << price[i] << endl;
    }
}

int main()
{
    int nItems;
    int i = 0;
    char cancel;

    do //This loop for entering n number of shops and n number of items
    {
        cout<<endl<<"For the Shop no."<<i+1<<endl;
        cout << "Enter the number the of items you want to enter : ";
        cin >> nItems;

        items shopi;
        shopi.initcouter();

        for (int j = 0; j < nItems; j++)
        {
            shopi.setPrice();
        }
        shopi.DisplayItems();

        i++;

        cout << "Do you want to enter the data of next shop(y,n)" << endl;
        cin >> cancel;

    } while (cancel == 'Y' || cancel == 'y');

    cout<<endl<<"Thanks for entering Data"<<endl;;

    return 0;
}
