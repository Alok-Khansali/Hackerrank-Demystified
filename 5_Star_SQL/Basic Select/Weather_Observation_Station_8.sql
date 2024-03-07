select distinct city
from station
where substring(city, length(city), length(city)) in ('a', 'i', 'e', 'o', 'u')
    and substring(city, 1, 1) in ('a', 'i', 'e', 'o', 'u');
#approach 2
select city
from station
where (left(city, 1) in ('a', 'e', 'u', 'i', 'o'))
    and (right(city, 1) in ('a', 'e', 'u', 'i', 'o'));
#approach 3
select distinct city
from STATION
where city REGEXP '^[a,e,i,o,u]'
    and city REGEXP '[a,e,i,o,u]$';