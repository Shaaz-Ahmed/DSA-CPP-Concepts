-- cross join: A CROSS JOIN produces a Cartesian product of the two tables.
-- This means that every row from the Students table is paired with every row from the Classes table.


use joins;

select * from students;

select * from classes;

SELECT students.StudentName, classes.ClassName
FROM students CROSS JOIN classes;

