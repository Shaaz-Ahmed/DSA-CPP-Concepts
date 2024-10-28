-- Left join : left join gives the left table and matching value from right table

use joins;

SELECT * FROM Students;

SELECT * FROM classes;

SELECT students.StudentName, classes.ClassName
FROM STUDENTS LEFT JOIN CLASSES
ON students.ClassID = classes.ClassID;