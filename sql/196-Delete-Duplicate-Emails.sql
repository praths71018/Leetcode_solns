# Write your MySQL query statement below
delete P1
from Person P1
Join Person P2
ON P1.email=P2.email
where P1.id > P2.id;

-- basically this solution picks 3|john@example.com|1|john@example.com
-- row from join and deletes this row itself 
-- Below is the join
-- 1|john@example.com|1|john@example.com
-- 1|john@example.com|2|bob@example.com 
-- 1|john@example.com|3|john@example.com

-- 2|bob@example.com|1|john@example.com
-- 2|bob@example.com|2|bob@example.com
-- 2|bob@example.com|3|john@example.com

-- 3|john@example.com|1|john@example.com
-- 3|john@example.com|2|bob@example.com
-- 3|john@example.com|3|john@example.com

-- Change will be reflected on Person P1 now which is set to display