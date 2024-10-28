-- Right join: It is exact opposie to left join
-- It takes complete data of right table and common data from left table

use joins;

SELECT * FROM Students;

SELECT * FROM classes;

-- RIGHT JOIN

SELECT Students.studentName, classes.ClassName
FROM Students RIGHT JOIN classes
ON students.ClassID = classes.ClassID;