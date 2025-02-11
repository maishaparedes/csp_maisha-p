#Maisha Paredes, String notes python

#String is a data type that holds information surrounded by quotation marks like: "" ''

#note = "Teachers class"

#name = input("What is your first name?").strip().upper()

#print(f"Hello {name} welcome to my program!")

#print("this is your name "+ name)

sentence = "The quick brown fox jumps over the lazy dog"

#print(len(sentence))

#print(sentence[4])
start = sentence.find("brown")
length = len("brown fox")
print(sentence[start:start+10:19])