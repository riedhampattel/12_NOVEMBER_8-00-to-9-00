-- to execute the query ---> ctrl + shift + enter
create schema 11_november;

create table Stdent
(
i int not null unique,
name varchar(25) not null,
dob int not null,
percentage float
);

describe stdent;

-- rename table
alter table stdent rename to student;

describe student;

-- rename column
alter table student rename column i to id;

-- modify column
alter table student modify dob date not null;

-- modify column
alter table student modify percentage float not null;

describe student;

-- add column 
alter table student add column remarks char not null;
alter table student add column email varchar(25) not null after name;

describe student;

-- delete column
alter table student drop column dob;

describe student;

drop table student;

describe student;

drop schema 11_november;