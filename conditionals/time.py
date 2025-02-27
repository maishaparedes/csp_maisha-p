#Maisha Paredes, How to get the time of day
import time
#first instance of time in programming
first_time = time.gmtime
#print(first_time) 


#get our current time in seconds
current = time.time()
print(current) #seconds since january 1 1970


#current date and time like we see it normally
now = time.ctime(current)
#print(now)

#get a part of the time
local_time = time.localtime(current)

day = local_time.tm_wday
hour = local_time.tm_hour #military time  (0-23)

print(hour)