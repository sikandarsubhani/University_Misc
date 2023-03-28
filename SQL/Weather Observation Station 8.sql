SELECT DISTINCT city from station
WHERE 
 left(city,1) IN ("a","e","i","o","u") 
 AND
 right(city,1) IN ("a","e","i","o","u");