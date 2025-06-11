with main as (
    select s.machine_id,s.timestamp as start, e.timestamp as end, s.process_id
    from Activity as s join Activity as e on s.machine_id = e.machine_id and s.process_id=e.process_id
    where s.activity_type = 'start' and e.activity_type='end'
)

select machine_id, round(sum(end-start) / count(process_id),3) as processing_time
from main
group by machine_id;