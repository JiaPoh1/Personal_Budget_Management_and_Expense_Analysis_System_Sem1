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
Enter your fixed income: 4000

Enter your variable income: 2000

Enter the number of fixed expenses: 5

Enter fixed expense 1: 100

Enter fixed expense 2: 200

Enter fixed expense 3: 300

Enter fixed expense 4: 400

Enter fixed expense 5: 500

Enter the number of variable expenses: 4

Enter variable expense 1: 100

Enter variable expense 2: 200

Enter variable expense 3: 300

Enter variable expense 4: 400

Enter your savings goal: 1500
<br/><br/><br/>
--- Results ---

Total Income:RM 6000

Total Fixed Expenses:RM 1500

Total Variable Expenses:RM 1000

Total Expenses:RM 2500

Actual Savings:RM 3500

Savings goal met! Extra savings:RM 2000

This program will generate the expense report.

First of all, please enter all of your expenses based on the category.
<br/><br/><br/>

Enter your expenses on transportation: RM 100

Enter Y to add more: n
<br/><br/>

Enter your expenses on food: RM 200

Enter Y to add more: y
<br/><br/>

Enter your expenses on food: RM 300

Enter Y to add more: n
<br/><br/>

Enter your expenses on utilities: RM 400

Enter Y to add more: y
<br/><br/>

Enter your expenses on utilities: RM 500

Enter Y to add more: n
<br/><br/>

Enter your expenses on medical and healthcare: RM 100

Enter Y to add more: n
<br/><br/>

Enter your expenses on personal spending: RM 200

Enter Y to add more : y
<br/><br/>

Enter your expenses on personal spending: RM 300

Enter Y to add more: n
<br/><br/>

Enter your expenses on entertainment: RM 400

Enter Y to add more: n
<br/><br/><br/>
TRANSPORTATION:

Your transportation total expenses are RM 100.00
<br/><br/>

FOOD:

Your food total expenses are RM 500.00
<br/><br/>

UTILITIES:

Your utilities total expenses are RM 900.00
<br/><br/>

MEDICAL AND HEALTHCARE:

Your medical and healthcare total expenses are RM 100.00
<br/><br/>

PERSONAL SPENDING:

Your personal spending total expenses are RM 500.00
<br/><br/>

ENTERTAINMENT:

Your entertainmet total expenses are RM 400.00
<br/><br/>

TOTAL EXPENSES:

Your total expenses are RM 2500.00
<br/><br/>

Enter Y to see the the percentage of total expenses on each category: y
<br/><br/><br/>

TRANSPORTATION:

Your transportation percentage of total expenses are 4.00%
<br/><br/>

FOOD:

Your food percentage of total expenses are 20.00%
<br/><br/>

UTILITIES:

Your utilities percentage of total expenses are 36.00%
<br/><br/>

MEDICAL AND HEALTHCARE:

Your medical and healthcare percentage of total expenses are 4.00%
<br/><br/>

PERSONAL SPENDING:

Your personal spending percentage of total expenses are 20.00%
<br/><br/>

ENTERTAINMENT:

Your entertainment percentage of total expenses are 16.00%
<br/><br/>

Your available budget: RM3500.00

Total percentage of all categories: 100.00%

Transportation budget: RM140.00

Food budget: RM700.00

Utilities budget: RM1260.00

Medical and Healthcare budget: RM140.00

Personal Spending budget: RM700.00

Entertainment budget: RM560.00

  
## ⚠️ Notes
- This is a console-based program (no GUI)
- Some parts use global variables (can be improved)
- Works best in environments that support standard C++ input/output

