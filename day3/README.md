Personal Finance Tracker

Description
-----------
This project is a simple Personal Finance Tracker that allows users to:
- Track income and expenses.
- View a summary of their financial situation.
- Receive feedback based on their balance (profit or loss).

The program helps users monitor their financial health by allowing them to add income and expenses, display the summary, and get suggestions for improvement if they are in a loss.

Features
--------
- Add Income: Enter your income and store it in a record.
- Add Expenses: Enter your expenses and store them in a record.
- Display Summary: View your total income, total expenses, and balance (profit or loss).
- Feedback: Receive a message based on whether you're in profit, loss, or balanced.

How to Use
-----------
1. Run the Program: Start the program by running the compiled C code in your terminal or IDE.
   
2. Menu Options: The program will display a menu with the following choices:
    - 1. Add Income: Enter an amount of income to add.
    - 2. Add Expenses: Enter an amount of expenses to add.
    - 3. Display Summary: View your total income, total expenses, and balance.
    - 4. Quit: Exit the program.

3. Entering Data:
    - When you choose to add income or expenses, you will be prompted to enter a numeric amount.
    - The program will store these amounts in arrays for later calculations.

4. Viewing Summary:
    - After adding income and expenses, you can view a summary of your finances.
    - The program will calculate the balance and provide feedback:
        - Profit: If your income exceeds expenses, you'll get a "Great job!" message.
        - Loss: If your expenses exceed income, it will suggest reducing expenses or increasing income.
        - Balanced: If your income and expenses are equal, it will encourage you to aim for a surplus.

Code Structure
--------------
1. Main Function (main()):
   - Displays the menu and prompts the user for their choice.
   - Calls the corresponding function based on the user's input.

2. Add Income Function (add_income()):
   - Prompts the user to enter their income.
   - Stores the entered income in an array.

3. Add Expenses Function (add_expenses()):
   - Prompts the user to enter their expenses.
   - Stores the entered expenses in an array.

4. Display Summary Function (display_summary()):
   - Calculates the total income and expenses.
   - Displays the balance (profit or loss) and gives feedback.

Example Output
--------------
Welcome to Your Finance Tracker
1. Add Income
2. Add Expenses
3. Display Summary
4. Quit
Enter your choice: 1
Enter income amount: 1000.00
Income added successfully.

Welcome to Your Finance Tracker
1. Add Income
2. Add Expenses
3. Display Summary
4. Quit
Enter your choice: 2
Enter expense amount: 500.00
Expense added successfully.

Welcome to Your Finance Tracker
1. Add Income
2. Add Expenses
3. Display Summary
4. Quit
Enter your choice: 3

--- Finance Summary ---
Total Income: 1000.00
Total Expenses: 500.00
Balance: 500.00

Great job! You're in profit. Keep up the good work!

Limitations
-----------
- The program uses arrays to store income and expense records, with a maximum capacity of 100 entries for each.
- Data is not saved permanently, so the program will lose the records once it is exited.

Future Improvements
-------------------
- Implement saving and loading of data from a file, so the records persist between sessions.
- Improve the user interface by adding more detailed categories for income and expenses.
- Allow the user to remove or update income/expense records.

Requirements
------------
- A C compiler (e.g., GCC, Clang) to compile the code.
- A terminal or IDE to run the program.

License
-------
This project is open-source. Feel free to fork, modify, and use it for personal purposes.

