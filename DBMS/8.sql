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