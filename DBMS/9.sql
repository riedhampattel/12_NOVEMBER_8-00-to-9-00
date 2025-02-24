select * from employees;

select employee_id,first_name,last_name from employees;

create view personal_detail as select employee_id,first_name,last_name from employees;

select * from personal_detail;

delimiter &&
create procedure display()
select * from employees;
end &&

call display();

drop procedure display;

delimiter &&
create procedure display(in did int)
begin
select * from employees where department_id = did;
end &&

call display(90);
call display(60);

delimiter &&
create procedure add_data(in id int,name varchar(25),a int)
begin
insert into customer values(id,name,a);
end &&

call add_data(106,'Rohan',54);

select * from customer;