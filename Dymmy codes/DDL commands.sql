-- DDL commands : It is used to interact with the structure of table 

-- CREATE , DROP , TRUNCATE , ALTER

-- syntax of craete : create table table_name ( column_name data_type)
 
 create table student(
 name varchar(20) not null,
 id int not null
 );
 
 -- Drop : It is used to drop the table from the database
 
 DROP TABLE student;
 
 -- ALTER : It is used to add or delete the column to the table
 
 ALTER TABLE student add address varchar(20) ;

 ALTER TABLE student drop address ;
 
 -- Truncate: It will delete all the rows from the table it will keep only structure of the table. 
 
 TRUNCATE table student;
 