# 💰 Personal Budget Management System (C++)
📌 Description

This project is a console-based Personal Budget Management System developed in C++. It helps users track their income, manage expenses, and analyze spending habits across different categories.

The program allows users to input fixed and variable income, followed by multiple types of expenses. It then calculates total expenses, actual savings, and compares them against a user-defined savings goal.

Additionally, users can enter expenses by category such as transportation, food, utilities, medical & healthcare, personal spending, and entertainment. The system computes the percentage distribution of expenses and allocates the remaining budget proportionally based on spending priorities.

## ✨ Features
- 💵 Calculate total income (fixed + variable)
- 📉 Track fixed and variable expenses
- 🎯 Compare actual savings with savings goal
- 📊 Categorize expenses into 6 categories
- 📈 Calculate percentage of each expense category
- 💡 Automatically allocate remaining budget based on spending distribution

## 🛠️ Technologies Used
- C++
- Standard Libraries (iostream, iomanip, cmath)
- Functions & Modular Programming

## ▶️ How to Run

Clone the repository:
```
git clone https://github.com/JiaPoh1/Personal-Budget-Management-and-Expense-Analysis-System-Sem-1.git
Open in your C++ IDE (e.g., Visual Studio / Code::Blocks)

Compile and run:

g++ main.cpp -o program
./program
```
## 🖥️ Sample Output
Enter your fixed income: 2000

Enter your variable income: 500

Enter the number of fixed expenses: 3

Enter fixed expense 1: 100

Enter fixed expense 2: 200

Enter fixed expense 3: 300

Enter the number of variable expenses: 2

Enter variable expense 1: 250

Enter variable expense 2: 150

Enter your savings goal: 1000
<br/><br/><br/>
--- Results ---

Total Income:RM2500

Total Fixed Expenses:RM 600

Total Variable Expenses:RM 400

Total Expenses:RM 1000

Actual Savings:RM 1500

Savings goal met! Extra savings:RM 500

This program will generate the expense report.

First of all, please enter all of your expenses based on the category.
<br/><br/><br/>

Enter your expenses on transportation: RM 100

Enter Y to add more: n
<br/><br/>

Enter your expenses on food: RM 300

Enter Y to add more: n
<br/><br/>

Enter your expenses on utilities: RM 200

Enter Y to add more: n
<br/><br/>

Enter your expenses on medical and healthcare: RM 250

Enter Y to add more: n
<br/><br/>

Enter your expenses on personal spending: RM 150

Enter Y to add more : n
<br/><br/>

Enter your expenses on entertainment: RM 0

Enter Y to add more: n
<br/><br/><br/>
TRANSPORTATION:

Your transportation total expenses are RM 100.00
<br/><br/>

FOOD:

Your food total expenses are RM 300.00
<br/><br/>

UTILITIES:

Your utilities total expenses are RM 200.00
<br/><br/>

MEDICAL AND HEALTHCARE:

Your medical and healthcare total expenses are RM 250.00
<br/><br/>

PERSONAL SPENDING:

Your personal spending total expenses are RM 150.00
<br/><br/>

ENTERTAINMENT:

Your entertainmet total expenses are RM 0.00
<br/><br/>

TOTAL EXPENSES:

Your total expenses are RM 1000.00
<br/><br/>

Enter Y to see the the percentage of total expenses on each category: y
<br/><br/><br/>

TRANSPORTATION:

Your transportation percentage of total expenses are 10.00%
<br/><br/>

FOOD:

Your food percentage of total expenses are 30.00%
<br/><br/>

UTILITIES:

Your utilities percentage of total expenses are 20.00%
<br/><br/>

MEDICAL AND HEALTHCARE:

Your medical and healthcare percentage of total expenses are 25.00%
<br/><br/>

PERSONAL SPENDING:

Your personal spending percentage of total expenses are 15.00%
<br/><br/>

ENTERTAINMENT:

Your entertainmet percentage of total expenses are 0.00%
<br/><br/>

Your available budget: RM1500.00

Total percentage of all categories: 100.00%

Category budget transportation: RM150.00

Category budget food: RM450.00

Category budget utilities: RM300.00

Category budget medical and healthcare: RM375.00

Category budget personal spending: RM225.00

Category budget entertainment: RM0.00

## 📊 Categories Included
- 🚗 Transportation
- 🍔 Food
- 💡 Utilities
- 🏥 Medical & Healthcare
- 🛍️ Personal Spending
- 🎮 Entertainment
  
## ⚠️ Notes
- This is a console-based program (no GUI)
- Some parts use global variables (can be improved)
- Works best in environments that support standard C++ input/output

## 🚀 Future Improvements
- Replace global variables with structured data (struct/class)
- Add file storage for saving user data
- Improve UI/UX (menu system or GUI)
- Add charts/visualization of expenses
- Reduce repetitive functions using loops or arrays
