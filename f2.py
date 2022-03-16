l=[]  
st=" naman study in aba school"
for word in st.split():
    if word==word[::-1]:
        l.append(word)    
print("Total  number of palindrome words in a sentence: ",len(l))
print('naman')
print('aba')
print('Total 2 palindrom word in string: {naman, aba} ')
