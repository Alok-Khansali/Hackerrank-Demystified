--type 1 not creating additional variable
SELECT COUNTRY.Continent,
    FLOOR(AVG(CITY.Population)) AS avg_city_population
FROM CITY
    JOIN COUNTRY ON CITY.CountryCode = COUNTRY.Code
GROUP BY COUNTRY.Continent;
--type 2
select distinct(c.continent),
    floor(avg(a.population))
from city a
    inner join country c on c.code = a.countrycode
group by c.continent;
--