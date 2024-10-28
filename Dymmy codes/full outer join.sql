-- full outer join: it gives all the data from both the tables

use joins;

select * from students;

select * from classes;

-- FULL outer join

SELECT Students.StudentName, Classes.ClassName
FROM Students
FULL OUTER JOIN Classes
ON Students.ClassID = Classes.ClassID;

-- Perform a LEFT JOIN
SELECT Students.StudentName, Classes.ClassName
FROM Students
LEFT JOIN Classes
ON Students.ClassID = Classes.ClassID

UNION

-- Perform a RIGHT JOIN
SELECT Students.StudentName, Classes.ClassName
FROM Students
RIGHT JOIN Classes
ON Students.ClassID = Classes.ClassID;
