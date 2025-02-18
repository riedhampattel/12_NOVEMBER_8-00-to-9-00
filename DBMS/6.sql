select * from employees;

delete from employees where employee_id = 202;
delete from employees where employee_id = 205;
delete from employees where employee_id = 206;

select * from employees;

rollback;

select * from employees;

delete from employees where employee_id = 202;
delete from employees where employee_id = 205;
delete from employees where employee_id = 206;

select * from employees;

commit;

rollback;

select * from employees;

-- 1987-07-17

describe employees;

alter table employees modify hire_date varchar(20) not null;

update employees set hire_date = date_format(hire_date,'%d-%b-%y');

select * from employees;

savepoint s1;
delete from employees where employee_id = 178;
savepoint s2;
delete from employees where employee_id = 200;
savepoint s3;
delete from employees where employee_id = 201;

select * from employees;

rollback to s3;

select * from employees;