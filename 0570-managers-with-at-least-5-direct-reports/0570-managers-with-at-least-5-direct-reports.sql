with managers as  (select managerId 
from Employee
group by managerId
having count(*) >= 5
)
select name
from Employee
where id in (select managerId from managers);