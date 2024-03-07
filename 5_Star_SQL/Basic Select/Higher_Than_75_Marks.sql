select name
from students
where marks > 75
order by substring(name, length(name) - 2, length(name)),
    id;
#APPROACH 2
SELECT NAME
FROM STUDENTS
WHERE MARKS > 75
ORDER BY RIGHT(NAME, 3),
    ID;