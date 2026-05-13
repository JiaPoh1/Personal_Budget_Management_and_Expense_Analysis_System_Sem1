#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float sum_transportation, sum_food, sum_utilities, sum_medical_and_healthcare, sum_personal_spending, sum_entertainment, total_expenses;  // Fazly Reza, declare variables

double calculateTotalIncome() // Alifah, user input fixed income and variable. Then calculate the total income by adding fixed income with variable income
{
	double fixedIncome, variableIncome;

	cout << "Enter your fixed income: ";
	cin >> fixedIncome;

	cout << "Enter your variable income: ";
	cin >> variableIncome;

	return fixedIncome + variableIncome;
}

double calculateTotalExpenses(const string& expenseType, int& count) // Alifah, user enter the number of expenses type. Then user enter the value of the expense for each type
{
	cout << "Enter the number of " << expenseType << " expenses: ";
	cin >> count;

	double total = 0;
	for (int i = 0; i < count; ++i) {
		double expense;
		cout << "Enter " << expenseType << " expense " << i + 1 << ": ";
		cin >> expense;
		total += expense;
	}
	return total;
}

void compareSavings(double savingsGoal, double actualSavings) // Ain, this function compares actual savings with savings goal
{
	if (actualSavings >= savingsGoal) {
		cout << "Savings goal met! Extra savings:RM " << actualSavings - savingsGoal << endl;
	}
	else {
		cout << "Savings goal not met. Deficit:RM " << savingsGoal - actualSavings << endl;
	}
}

float inputCategoryExpenses(string categoryName) // Yeoh Jia Poh
{
	float expense;
	float total = 0;
	char answer;

	do {
		cout << "\nEnter your expenses on " << categoryName << ": RM ";

		cin >> expense;

		total += expense;

		cout << "Enter Y to add more: ";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');

	return total;
}

float category_expenses_total()  // Fazly Reza, user input on expenses for each category and calculate total expenses by adding every expense type
{
	sum_transportation = inputCategoryExpenses("transportation");
	sum_food = inputCategoryExpenses("food");
	sum_utilities = inputCategoryExpenses("utilities");
	sum_medical_and_healthcare = inputCategoryExpenses("medical and healthcare");
	sum_personal_spending = inputCategoryExpenses("personal spending");
	sum_entertainment = inputCategoryExpenses("entertainment");

	total_expenses = sum_transportation + sum_food + sum_utilities + sum_medical_and_healthcare + sum_personal_spending + sum_entertainment;

	cout << endl << "------------------------------------------------------------------------------------------------------------------------" << endl;

	cout << endl << "TRANSPORTATION:" << endl;
	cout << "Your transportation total expenses are RM " << fixed << setprecision(2) << sum_transportation << endl;

	cout << endl << "FOOD:" << endl;
	cout << "Your food total expenses are RM " << sum_food << endl;

	cout << endl << "UTILITIES:" << endl;
	cout << "Your utilities total expenses are RM " << sum_utilities << endl;

	cout << endl << "MEDICAL AND HEALTHCARE:" << endl;
	cout << "Your medical and healthcare total expenses are RM " << sum_medical_and_healthcare << endl;

	cout << endl << "PERSONAL SPENDING:" << endl;
	cout << "Your personal spending total expenses are RM " << sum_personal_spending << endl;

	cout << endl << "ENTERTAINMENT:" << endl;
	cout << "Your entertainmet total expenses are RM " << sum_entertainment << endl;

	cout << endl << "TOTAL EXPENSES:" << endl;
	cout << "Your total expenses are RM " << total_expenses << endl;

	cout << endl << "------------------------------------------------------------------------------------------------------------------------" << endl;
	return total_expenses;
}

void percentage_of_total_expenses(double &transportation_percentage, double &food_percentage, double &utilities_percentage, double &medical_and_healthcare_percentage  // Fazly Reza
	, double &personal_spending_percentage, double &entertainment_percentage)  // Fazly Reza, calculate percentage of each category expense
{
	cout << endl << "------------------------------------------------------------------------------------------------------------------------" << endl;

	transportation_percentage = sum_transportation / total_expenses * 100;
	cout << endl << "TRANSPORTATION:" << endl;
	cout << "Your transportation percentage of total expenses are " << transportation_percentage << "%" << endl;

	food_percentage = sum_food / total_expenses * 100;
	cout << endl << "FOOD:" << endl;
	cout << "Your food percentage of total expenses are " << food_percentage << "%" << endl;

	utilities_percentage = sum_utilities / total_expenses * 100;
	cout << endl << "UTILITIES:" << endl;
	cout << "Your utilities percentage of total expenses are " << utilities_percentage << "%" << endl;

	medical_and_healthcare_percentage = sum_medical_and_healthcare / total_expenses * 100;
	cout << endl << "MEDICAL AND HEALTHCARE:" << endl;
	cout << "Your medical and healthcare percentage of total expenses are " << medical_and_healthcare_percentage << "%" << endl;

	personal_spending_percentage = sum_personal_spending / total_expenses * 100;
	cout << endl << "PERSONAL SPENDING:" << endl;
	cout << "Your personal spending percentage of total expenses are " << personal_spending_percentage << "%" << endl;

	entertainment_percentage = sum_entertainment / total_expenses * 100;
	cout << endl << "ENTERTAINMENT:" << endl;
	cout << "Your entertainment percentage of total expenses are " << entertainment_percentage << "%" << endl;

	cout << endl << "------------------------------------------------------------------------------------------------------------------------" << endl;
}

void calculateTotalPercentage(double &transportation_percentage , double &food_percentage, double &utilities_percentage, double &medical_and_healthcare_percentage,
	double &personal_spending_percentage, double &entertainment_percentage, double &TotalPercentage)  /* Yeoh Jia Poh, calculate total percentage
	by adding all percentage for each category*/
{
	TotalPercentage = transportation_percentage + food_percentage + utilities_percentage + medical_and_healthcare_percentage 
		+ personal_spending_percentage + entertainment_percentage;
}

void CalculateBudgetAllocation(double &AvailableBudget, double TotalIncome, double TotalExpenses, double &TotalBudgetAllCategories, double TotalPercentage)  /* Yeoh Jia Poh
calculate available budget by subtracting total income with total expenses, assign totalBudgetAllCategories with the value in TotalPercentage */
{
	AvailableBudget = TotalIncome - TotalExpenses; // Calculate available budget
	TotalBudgetAllCategories = TotalPercentage; // Calculate Total budget of all categories
	cout << "Your available budget: RM" << AvailableBudget << endl;
	cout << "Total percentage of all categories: " << TotalBudgetAllCategories << "%" << endl;
}

void calculateCategoryBudget(string categoryName, double& categoryBudget, double categoryPercentage, double totalPercentage, double availableBudget) /* Yeoh Jia Poh
Calculate budget for all category*/
{
	categoryBudget = (categoryPercentage / totalPercentage) * availableBudget;
	cout << categoryName << " budget: RM " << categoryBudget << endl;
}

int main()
{
	int fixedCount;
	int variableCount;

	double totalIncome = calculateTotalIncome(); // Alifah
	
	double totalFixedExpenses = calculateTotalExpenses("fixed", fixedCount); // Alifah
	double totalVariableExpenses = calculateTotalExpenses("variable", variableCount); // Alifah

	double totalExpenses = totalFixedExpenses + totalVariableExpenses;
	double actualSavings = totalIncome - totalExpenses;
	double savingsGoal;

	double AvailableBudget, TotalBudgetAllCategories;
	double totalPercentage;
	double CategoryBudgetTransportation, CategoryBudgetFood, CategoryBudgetUtilities, CategoryBudgetMedicalAndHealthCare, CategoryBudgetPersonalSpending, CategoryBudgetEntertainment;
	double transportation_percentage, food_percentage, utilities_percentage, medical_and_healthcare_percentage, personal_spending_percentage, entertainment_percentage;


	cout << "Enter your savings goal: ";
	cin >> savingsGoal;
	cout << "\n--- Results ---\n";
	cout << "Total Income:RM " << totalIncome << endl;
	cout << "Total Fixed Expenses:RM " << totalFixedExpenses << endl;
	cout << "Total Variable Expenses:RM " << totalVariableExpenses << endl;
	cout << "Total Expenses:RM " << totalExpenses << endl;
	cout << "Actual Savings:RM " << actualSavings << endl;

	compareSavings(savingsGoal, actualSavings); // Ain
	char answer2 = 'Y';
	cout << "This program will generate the expense report." << endl;
	cout << "First of all, please enter all of your expenses based on the category." << endl;
	category_expenses_total(); // Fazly Reza
	cout << endl << "Enter Y to see the the percentage of total expenses on each category: ";
	cin >> answer2;

	if (answer2 == 'Y' || answer2 == 'y')
	percentage_of_total_expenses(transportation_percentage, food_percentage, utilities_percentage, medical_and_healthcare_percentage, 
		personal_spending_percentage, entertainment_percentage);  // Fazly Reza

	calculateTotalPercentage(transportation_percentage, food_percentage, utilities_percentage, medical_and_healthcare_percentage,
		personal_spending_percentage, entertainment_percentage, totalPercentage);  // Yeoh Jia Poh

	CalculateBudgetAllocation(AvailableBudget, totalIncome, totalExpenses, TotalBudgetAllCategories, totalPercentage); // Yeoh Jia Poh
	calculateCategoryBudget("Transportation", CategoryBudgetTransportation, transportation_percentage, totalPercentage, AvailableBudget); // Yeoh Jia Poh
	calculateCategoryBudget("Food", CategoryBudgetFood, food_percentage, totalPercentage, AvailableBudget); // Yeoh Jia Poh
	calculateCategoryBudget("Utilities", CategoryBudgetUtilities, utilities_percentage, totalPercentage, AvailableBudget); // Yeoh Jia Poh
	calculateCategoryBudget("Medical and Healthcare", CategoryBudgetMedicalAndHealthCare, medical_and_healthcare_percentage, totalPercentage, AvailableBudget); // Yeoh Jia Poh
	calculateCategoryBudget("Personal Spending", CategoryBudgetPersonalSpending, personal_spending_percentage, totalPercentage, AvailableBudget); // Yeoh Jia Poh
	calculateCategoryBudget("Entertainment", CategoryBudgetEntertainment, entertainment_percentage, totalPercentage, AvailableBudget); // Yeoh Jia Poh
}
