#include <iostream> // Include the iostream library for input and output
#include <string> // Include the string library to use string class
#include <iomanip> // Include the iomanip library for setting output width
using namespace std; // Use the standard namespace

// Customer class for customer details
class Customer {
private: // Access specifier, accessible only within the class
    int customerID;
    string name;
    string email;

public: // Member functions are accessible from outside the class
    // Constructor to initialize the member variables
    Customer(int id, string n, string e) : customerID(id), name(n), email(e) {}

    // Function to display customer details
    void displayCustomer() {
        cout << "Customer ID: " << customerID << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
    }

    // Getter functions
    int getCustomerID() { return customerID; }
    string getName() { return name; }
    string getEmail() { return email; }
};

// Product class for the product menu
class Product {
private: // Access specifier, accessible only within the class
    int productID;
    string productName;
    float price;
    int stock;

public: // Member functions are accessible from outside the class
    // Constructor to initialize the member variables
    Product(int id, string name, float p, int s) : productID(id), productName(name), price(p), stock(s) {}

    // Function to display product details in tabular form
    void displayProduct() {
        cout << left << setw(10) << productID << setw(25) << productName << setw(10) << price << " INR" << setw(10) << stock << endl;
    }

    // Getter functions
    int getProductID() { return productID; }
    string getProductName() { return productName; }
    float getPrice() { return price; }
    int getStock() { return stock; }

    // Function to update product stock
    void updateStock(int s) {
        stock = s;
    }
};

// Sales class to record sales transactions
class Sales {
private: // Access specifier, accessible only within the class
    int saleID;
    int productID;
    int customerID;
    int quantity;
    float totalPrice;

public: // Member functions are accessible from outside the class
    // Constructor to initialize the member variables
    Sales(int sid, int pid, int cid, int qty, float price) : saleID(sid), productID(pid), customerID(cid), quantity(qty), totalPrice(price) {}

    // Function to display sale details
    void displaySale() {
        cout << "Sale ID: " << saleID << endl;
        cout << "Product ID: " << productID << endl;
        cout << "Customer ID: " << customerID << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: " << totalPrice << " INR" << endl;
    }
};

// Function to display the product list in a tabular form
void displayProductList(Product products[], int size) {
    cout << left << setw(10) << "Product ID" << setw(25) << "Product Name" << setw(10) << "Price (INR)" << setw(10) << "Stock" << endl;
    for (int i = 0; i < size; ++i) {
        products[i].displayProduct();
    }
}

// Driver's code
int main() {
    // Predefined products in the system
    Product products[] = {
        Product(1, "Lipstick", 1199, 100),
        Product(2, "Foundation", 1999, 50),
        Product(3, "Mascara", 999, 30),
        Product(4, "Eyeliner", 799, 80),
        Product(5, "Blush", 1199, 60),
        Product(6, "Concealer", 1599, 40),
        Product(7, "Bronzer", 1099, 70),
        Product(8, "Eyeshadow Palette", 1799, 45),
        Product(9, "Lip Gloss", 749, 90),
        Product(10, "Highlighter", 1399, 55),
        Product(11, "Primer", 1599, 35),
        Product(12, "Setting Spray", 1499, 25),
        Product(13, "Makeup Remover", 649, 75),
        Product(14, "Brow Pencil", 799, 65),
        Product(15, "Contour Kit", 1799, 30)
    };
    int productCount = sizeof(products) / sizeof(products[0]);

    cout << "Welcome to the Makeup Shop Management System" << endl;
    cout << endl; // Add space after welcome message

    cout << "Here are our rare beauty products:" << endl;
    displayProductList(products, productCount);
    cout << endl; // Add space after product list

    int customerID;
    string name, email;
    cout << "Enter Customer ID: ";
    cin >> customerID;
    cin.ignore(); // Flush the newline character after reading customerID

    cout << "Enter Customer Name: ";
    getline(cin, name);

    cout << "Enter Customer Email: ";
    getline(cin, email);

    // Create Customer object and display details
    Customer customer(customerID, name, email);
    customer.displayCustomer();
    cout << endl; // Add space after customer details

    char choice;
    float grandTotal = 0.0;
    Sales* sales[50]; // Array to store multiple sales
    int saleIndex = 0;

    do {
        int productID, quantity;
        cout << "Enter Product ID to purchase: ";
        cin >> productID;
        cout << "Enter Quantity: ";
        cin >> quantity;

        // Find the product based on productID
        Product* product = NULL;
        for (int i = 0; i < productCount; ++i) {
            if (productID == products[i].getProductID()) {
                product = &products[i];
                break;
            }
        }

        // Check if product is found and process the order
        if (product != NULL) {
            if (product->getStock() >= quantity) { // Check if enough stock is available
                float totalPrice = quantity * product->getPrice(); // Calculate total price
                sales[saleIndex++] = new Sales(saleIndex, productID, customerID, quantity, totalPrice); // Create Sales object
                grandTotal += totalPrice; // Add to grand total

                // Update product stock
                product->updateStock(product->getStock() - quantity);
            } else {
                cout << "Insufficient stock for the product." << endl; // Notify if stock is insufficient
            }
        } else {
            cout << "Product not found." << endl; // Notify if product is not found
        }

        cout << "Do you want to purchase another product? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << endl; // Add space before displaying sales
    cout << "---------- Sales Summary ----------" << endl;
    for (int i = 0; i < saleIndex; ++i) {
        sales[i]->displaySale();
    }
    cout << "Grand Total: " << grandTotal << " INR" << endl;

    cout << "--------- Remaining Products: ---------" << endl;
    displayProductList(products, productCount); // Display updated product list
    cout <<endl;
    cout << "--------- Thankyou so much for shopping with us ---------" << endl;
    

    return 0;
}

