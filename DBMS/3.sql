create table employees
(
employee_id int not null unique,
first_name varchar(25) not null,
last_name varchar(25) not null,
hire_date date not null,
salary int not null,
commission_pct float,
manager_id int,
department_id int
);

insert into employees(employee_id,first_name,last_name,hire_date,salary,commission_pct,manager_id,department_id) values
(100,'Steven','King','1987-02-25',24000,null,null,90),
(101,'Neena','Kochhar','1989-09-21',17000,null,100,90);

select * from employees;