#Maisha Paredes, python, time of day assignment

import time  

local_time = time.localtime()  

hour = local_time.tm_hour 
  
if hour < 12:  
    print("Good morning sunshine!")  
elif hour < 18:  
    print("Good afternoon.")  
else:  
    print("Hey, good evening.")   
