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

select * from employees;

select * from employees order by salary;

-- column name
select * from employees order by salary desc;

-- column position
select * from employees order by 5 desc;

-- column alias
select employee_id,first_name,salary as income from employees order by income desc;

select * from employees order by first_name;

select * from employees order by comission_pct;

select first_name,salary,comission_pct*salary as comission_amt,(comission_pct*salary) + salary as total_salary from employees; 

select * from employees where first_name like 'B%';

select * from employees where first_name like '%ee%';

select * from employees where first_name like '%e%e%';

select * from employees where first_name like '%e_';

select * from employees where hire_date like '%-J_N-%';

select * from employees where hire_date like '%-JU_-%';

select * from employees;

select * from employees where department_id=90 or department_id=60 or department_id=80;

select * from employees where DEPARTMENT_ID in (90,60,80);

select * from employees where (DEPARTMENT_ID,MANAGER_ID) in ((90,100),(60,102),(80,149));

select * from employees where (DEPARTMENT_ID,MANAGER_ID) not in ((90,100),(60,102),(80,149));

select * from employees where DEPARTMENT_ID not in (90,60,80);

select min(salary) from employees;

select max(salary) from employees;

select sum(salary) from employees;

select avg(salary) from employees;

select count(comission_pct) from employees;

select count(*) from employees;

select DEPARTMENT_ID,max(salary) from employees group by DEPARTMENT_ID;

select DEPARTMENT_ID,min(salary) from employees group by DEPARTMENT_ID;

select DEPARTMENT_ID,count(salary) from employees group by DEPARTMENT_ID;

select DEPARTMENT_ID,count(salary) from employees group by DEPARTMENT_ID having count(salary)>2 order by 2;

select * from employees;

select * from employees order by salary desc limit 10;

select * from employees order by salary limit 5;

select * from employees order by salary limit 10 offset 5;