select * from employees;

create table users
(
user_id int primary key,
name varchar(25) not null,
age int not null
);

insert into users values(101,'Rohan',15);
insert into users values(102,'Dhyan',25);
insert into users values(103,'Rucha',20);
insert into users values(104,'Adarsh',35);
insert into users values(105,'Kavya',22);

create table orders
(
order_id int primary key,
order_num int not null,
user_id int not null,
foreign key orders(user_id) references users(user_id)
);

insert into orders values(1,1452,101);
insert into orders values(2,1453,101);
insert into orders values(3,1455,103);
insert into orders values(4,1459,103);
insert into orders values(5,1458,105);

select * from users;

select * from orders;

select * from users natural join orders;

select users.user_id,users.name,orders.order_num
from users inner join orders
on users.user_id=orders.user_id;

select users.user_id,users.name,orders.order_num
from users left join orders
on users.user_id=orders.user_id;

select users.user_id,users.name,orders.order_num
from users right join orders
on users.user_id=orders.user_id;