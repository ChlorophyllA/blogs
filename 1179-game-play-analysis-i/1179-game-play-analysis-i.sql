# Write your MySQL query statement below
-- select a1.player_id,a1.event_date 
-- from Activity a1,Activity a2
-- where a1.player_id=a2.player_id and datediff(a1.event_date,a2.event_date)<0;
select player_id,min(event_date) as first_login from Activity group by player_id