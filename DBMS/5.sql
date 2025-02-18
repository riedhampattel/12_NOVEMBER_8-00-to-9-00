create role admin;

create user Rahul identified by 'abc@123' default role admin;

grant select on 11_november.employees to Rahul;

grant update,delete on 11_november.employees to Rahul;

revoke delete on 11_november.employees from Rahul;

revoke select on 11_november.employees from Rahul;