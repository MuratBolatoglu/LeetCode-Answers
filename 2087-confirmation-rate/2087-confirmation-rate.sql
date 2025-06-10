select s.user_id , round(ifnull(count(case when action = 'confirmed'  then 1 end )/ count(action),0),2) as confirmation_rate
from Signups as s left join Confirmations as c on c.user_id=s.user_id
group by s.user_id;
