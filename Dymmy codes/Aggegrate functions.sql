-- Aggegrate Functions: aggegrate function is used to perform calculations on multiple rows of single column of a table
use Emp_detail;
-- COUNT, SUM , MIN , MAX, AVG


-- COUNT (column_name): Count is used to count the number of rows in cloumns
SELECT * FROM Employee;
SELECT COUNT(Employee_ID) from Employee;
SELECT COUNT(*) FROM Employee WHERE Emp_Salary > 30000;
SELECT COUNT(Panelty) FROM Employee WHERE Emp_Salary > 30000;


-- MAX(column_name) : It give us the maximum value from the column
SELECT MAX(Emp_Salary) FROM Employee;
SELECT MAX(Emp_Salary) FROM Employee;
SELECT COUNT(*) FROM Employees WHERE Emp_Salary > 50000;
SELECT MAX(Panelty) FROM Employee;


-- MIN(column_name): It give us the minimum value from the column
SELECT MIN(Emp_Salary) FROM Employee;
SELECT MIN(Emp_Bonus) FROM Employee;
SELECT MIN(Panelty) FROM Employee;


-- SUM(column_name) : It is used to give the sum of columns
SELECT SUM(Employee_ID) FROM Employee;
SELECT SUM(Emp_Salary) FROM Employee;
SELECT SUM(Emp_Bonus) FROM Employee;
SELECT SUM(Panelty) FROM Employee;


-- AVG(column_name): It give us the average of a column

SELECT AVG(Employee_ID) from Employee;
SELECT AVG(Emp_Salary) from Employee;
SELECT AVG(Emp_Bonus) from Employee;


