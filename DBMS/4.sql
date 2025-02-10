select employee_id,first_name from employees;

select * from employees;

select * from employees where employee_id = 103;

select * from employees where department_id = 90;

select * from employees where salary<10000;

select * from employees where salary=24000;

select * from employees where salary!=24000;

select employee_id,first_name,last_name,salary*12 as annual_salary from employees;

select *,salary*12 as annual_salary from employees where salary*12>200000;

select * from employees where department_id = 90 and manager_id = 100;

select * from employees where department_id = 90 or manager_id = 100;

select * from employees where salary>=10000 and salary<=20000;

select * from employees where salary between 10000 and 20000;

select * from employees where employee_id between 100 and 199;

select * from employees where commission_pct>0;

select * from employees where commission_pct is not null;

select * from employees where commission_pct is null;

select employee_id,concat(first_name,' ',last_name) as full_name from employees;