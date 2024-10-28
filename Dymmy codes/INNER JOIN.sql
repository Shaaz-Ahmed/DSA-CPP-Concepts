-- JOIN: is used to combine data from two or more tables

-- INNER JOIN: It display the common data in both tables

-- Syntax:
SELECT table_name.Column_names1..,
FROM TABLE1 INNER JOIN TABLE2
ON TABLE1.Column_name = TABLE2.column_name

CREATE DATABASE JOINS;

USE JOINS;

CREATE TABLE Emp(
emp_id INT NOT NULL,
emp_name varchar(20),
dep_id INT not null
);

create table dept(
dep_id int not null,
dept_name varchar(20)
);

INSERT INTO Emp(emp_id, emp_name, Dep_id) VALUES
(1, "Alice", 101),
(2, "Bob", 102),
(3, "Charlie", 103),
(4, "David", 104);

SELECT * FROM Emp;

INSERT INTO dept(dep_id, dept_name) VALUES
(101, "HR"),
(102, "IT"),
(103, "Marketing");

select * from dept;


-- INNER JOIN QUERY

SELECT emp.emp_name, dept.dept_name
FROM emp INNER JOIN dept
on emp.dep_id = dept.dep_id;

drop table emp;



-- Creating the Students table
CREATE TABLE Students (
    StudentID INT PRIMARY KEY,
    StudentName VARCHAR(50),
    ClassID INT
);

-- Creating the Classes table
CREATE TABLE Classes (
    ClassID INT PRIMARY KEY,
    ClassName VARCHAR(50)
);


-- Inserting data into Students table
INSERT INTO Students (StudentID, StudentName, ClassID)
VALUES 
(1, 'John', 201),
(2, 'Emma', 202),
(3, 'Liam', 203),
(4, 'Olivia', 204),
(5, 'Noah', 201),
(6, 'Sophia', 202),
(7, 'James', 203),
(8, 'Ava', 204),
(9, 'Mia', 201),
(10, 'Isabella', 205),
(11, 'Lucas', 206),
(12, 'Mason', 202),
(13, 'Ethan', 203),
(14, 'Ella', 201),
(15, 'Amelia', 207),
(16, 'Benjamin', 201),
(17, 'Charlotte', 202),
(18, 'Jack', 204),
(19, 'Harper', 203),
(20, 'Henry', 205);

-- Inserting data into Classes table
INSERT INTO Classes (ClassID, ClassName)
VALUES 
(201, 'Mathematics'),
(202, 'Science'),
(203, 'History'),
(204, 'Art'),
(205, 'Music'),
(206, 'Physical Education'),
(207, 'Computer Science');

select * from Students;

select * from classes;

-- INNER JOIN

SELECT students.studentName, classes.classname
FROM students INNER JOIN classes
ON students.classid = classes.classid;

