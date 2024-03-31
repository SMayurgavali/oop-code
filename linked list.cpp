#include<iostream>
#include<string>
using namespace std;
struct Product {
    string productId;
    string productName;
    string productPrice;
    Product* next;
};

void displayProducts(Product* productList) 
{
    cout << "\nProduct List\n";
    cout << "ID\tName\tPrice\n";
    while (productList != NULL) 
	{
        cout << productList->productId << "\t" << productList->productName << "\t" << productList->productPrice << endl;
        productList = productList->next;
    }
    cout << endl;
}

void insertProduct(Product* &head, int pos, Product* newProduct) {
    if (pos == 0) 
	{
        newProduct->next = head;
        head = newProduct;
    } else 
	{
        Product* temp = head;
        for (int i = 0; i < pos - 1 && temp != NULL; ++i) 
		{
            temp = temp->next;
        }
        if (temp != NULL) 
		{
            newProduct->next = temp->next;
            temp->next = newProduct;
        } else 
		{
            cout << "Invalid position\n";
        }
    }
    cout << "Product inserted at position " << pos << "\n";
}

void deleteProduct(Product* &head, int pos) 
{
    if (head == NULL) 
	{
        cout << "List is empty\n";
        return;
    }
    Product* temp = head;
    if (pos == 0) 
	{
        head = head->next;
        delete temp;
    } else 
	{
        for (int i = 0; temp != NULL && i < pos - 1; ++i) 
		{
            temp = temp->next;
        }
        Product* nextNode = temp->next->next;
        delete temp->next;
        temp->next = nextNode;
    }
    cout << "Product deleted from position " << pos << "\n";
}

int main() 
{
    Product* productList = NULL;

    int choice, pos;
    Product* newProduct;

    while (true) 
	{
        cout << "\nProduct Management System\n";
        cout << "1. Display Products\n";
        cout << "2. Insert Product\n";
        cout << "3. Delete Product\n";
        cout << "4. Exit\n";
        cout << "Enter your choice ";
        cin >> choice;

        switch (choice) 
		{
            case 1:
                displayProducts(productList);
                break;
            case 2:
                newProduct = new Product();
                cout << "Enter the position to insert ";
                cin >> pos;
                cout << "Enter Product ID ";
                cin >> newProduct->productId;
                cout << "Enter Product Name ";
                cin >> newProduct->productName;
                cout << "Enter Product Price ";
                cin >> newProduct->productPrice;
                newProduct->next = NULL;
                insertProduct(productList, pos, newProduct);
                break;
            case 3:
                cout << "Enter the position to delete ";
                cin >> pos;
                deleteProduct(productList, pos);
                break;
            case 4:
                cout << "Exiting\n";
                return 0;
            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}

