select sum(c.population)
from city c --define the table that needs to be joined
    inner join country a on c.countrycode = a.code -- define the type of join and on what table and what columns are same
where a.continent = 'Asia';
-- address the columns using the variables mentioned
#fun