# BeautyBill - Simplified Billing and Management for Cosmetics

## Introduction
BeautyBill is a comprehensive makeup shop management system designed to streamline the process of managing inventory, processing sales, and generating bills. This system allows users to enter their details, select products, and view their final bill and updated inventory. It's an efficient tool for makeup shop owners to keep track of their stock and sales seamlessly.

## Technologies Used
- **Programming Language:** C++
- **Object Oriented Programming**

## Workflow
The workflow of the BeautyBill system is as follows:
1. **Customer Entry:** The system prompts customers to enter their details, including their ID, name, and email.
2. **Product Selection:** Customers can view a list of available makeup products along with their prices and stock quantities. They select the products they wish to purchase by entering the product IDs and quantities.
3. **Bill Generation:** The system calculates the total price for the selected products and displays a detailed bill that includes customer details, product names, quantities, prices, and the grand total.
4. **Inventory Update:** After the purchase, the system updates the inventory to reflect the sold products.
5. **Sales Summary:** The system provides a summary of all sales transactions and the updated product list.

## Conclusion
BeautyBill aims to simplify the billing and management process for makeup shops, ensuring efficient and accurate tracking of sales and inventory. With its user-friendly interface and robust functionalities, it serves as a valuable tool for managing a makeup shop effectively.

## Sample Output

```text
Here are our rare beauty products:
Product ID  Product Name             Price (INR)Stock
1           Lipstick                 1199       INR100
2           Foundation               1999       INR50
3           Mascara                  999        INR30
4           Eyeliner                 799        INR80
5           Blush                    1199       INR60
6           Concealer                1599       INR40
7           Bronzer                  1099       INR70
8           Eyeshadow Palette        1799       INR45
9           Lip Gloss                749        INR90
10          Highlighter              1399       INR55
11          Primer                   1599       INR35
12          Setting Spray            1499       INR25
13          Makeup Remover           649        INR75
14          Brow Pencil              799        INR65
15          Contour Kit              1799       INR30

Enter Customer ID: 67
Enter Customer Name: Prashansa Pandey
Enter Customer Email: prashansapandey123@gmail.com
Customer ID: 67
Name: Prashansa Pandey
Email: prashansapandey123@gmail.com

Enter Product ID to purchase: 4
Enter Quantity: 1
Do you want to purchase another product? (y/n): y
Enter Product ID to purchase: 7
Enter Quantity: 2
Do you want to purchase another product? (y/n): y
Enter Product ID to purchase: 12
Enter Quantity: 2
Do you want to purchase another product? (y/n): n

---------- Sales Summary ----------
Sale ID: 0
Product ID: 4
Customer ID: 67
Quantity: 1
Total Price: 799 INR
Sale ID: 1
Product ID: 7
Customer ID: 67
Quantity: 2
Total Price: 2198 INR
Sale ID: 2
Product ID: 12
Customer ID: 67
Quantity: 2
Total Price: 2998 INR
Grand Total: 5995 INR
--------- Remaining Products: ---------
Product ID  Product Name             Price (INR)Stock
1           Lipstick                 1199       INR100
2           Foundation               1999       INR50
3           Mascara                  999        INR30
4           Eyeliner                 799        INR79
5           Blush                    1199       INR60
6           Concealer                1599       INR40
7           Bronzer                  1099       INR68
8           Eyeshadow Palette        1799       INR45
9           Lip Gloss                749        INR90
10          Highlighter              1399       INR55
11          Primer                   1599       INR35
12          Setting Spray            1499       INR23
13          Makeup Remover           649        INR75
14          Brow Pencil              799        INR65
15          Contour Kit              1799       INR30

--------- Thank you so much for shopping with us ---------




