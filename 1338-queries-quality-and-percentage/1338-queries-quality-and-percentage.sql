with q as (
    select query_name,round(avg(rating/position),2) as quality
    from Queries 
    group by query_name
),
 p as(
    select query_name,ROUND(COUNT(CASE WHEN rating < 3 THEN 1 END) * 100.0 / COUNT(*), 2) AS poor_query_percentage
    from Queries
    group by query_name
)
SELECT q.query_name,q.quality,p.poor_query_percentage
FROM q JOIN  p ON q.query_name = p.query_name;
