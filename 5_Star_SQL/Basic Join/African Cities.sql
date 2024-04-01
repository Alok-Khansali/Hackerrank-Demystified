select c.name
from city c
    inner join country a on c.countrycode = a.code
where a.continent = 'Africa';