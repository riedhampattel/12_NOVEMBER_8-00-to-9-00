select id,name,remarks from student;

select * from student;

insert into student values(101,'Rahul','1987-02-28',98.56,'A');

select * from student;

insert into student(remarks,percentage,dob,name,id) values('C',35.45,'1987-12-25','Rohan',102);

select * from student;

insert into student(id,name,dob,percentage,remarks) values 
(103,'Rakesh','2004-05-12',45.65,'B'),
(104,'Dhyana','2002-04-12',78.56,'B');

select * from student;

update student set percentage = 65.45 where id = 102;

select * from student;

update student set remarks = 'B' where id = 102;

select * from student;

delete from student where id = 104;

delete from student where remarks = 'C';

select * from student;

select * from student where remarks = 'B';

select * from student where remarks = 'A';