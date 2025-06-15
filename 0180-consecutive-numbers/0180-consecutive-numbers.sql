SELECT DISTINCT l1.num AS ConsecutiveNums
FROM (Logs l1 join Logs l2 on l1.num = l2.num) join Logs l3 on l2.num = l3.num
WHERE l1.id = l2.id - 1 AND l2.id = l3.id - 1;