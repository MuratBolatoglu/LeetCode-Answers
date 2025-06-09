select contest_id , ROUND(COUNT(DISTINCT r.user_id) * 100.0 / (SELECT COUNT(*) FROM Users), 2) AS percentage
from Register as r
group by contest_id
ORDER BY percentage DESC, contest_id ASC;
    
    
