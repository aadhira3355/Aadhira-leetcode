# Write your MySQL query statement below
select e.name
from Employee e
inner join Employee m
where e.id= m.managerId
group by m.managerId
having COUNT(m.managerId) >=5;