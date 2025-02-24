create table student
(
id int not null unique,
maths int default 0,
english int default 0,
science int default 0,
total int
);

create trigger add_data
before insert on 11_november.student
for each row
set new.total = new.maths + new.english + new.science;

select * from student;

insert into student(id,maths,english,science) values(101,45,36,45);

insert into student(id,maths,science) values (102,45,26);

insert into student(science,english,maths,id) values(45,36,40,103);

select * from student;

create table customer
(
c_id int not null unique,
c_name varchar(25) not null,
c_age int not null
);

create table copy_table
(
name varchar(25),
copy_time time 
);

create trigger copy_data
after insert on 11_november.customer
for each row
insert into copy_table values(new.c_name,curtime());

select * from customer;
select * from copy_table;

insert into customer values(101,'Tanya',25);
insert into customer values(102,'Dhyan',12);
insert into customer values(103,'Dhaval',25);
insert into customer values(104,'Chandresh',15);
insert into customer values(105,'Mehul',35);

select * from customer;
select * from copy_table;