##RAUT, Javier M.
##Vowel-Consonant Letter Identifier

##Letter Input
text = (input ("Input a single letter: "))

#Lists
vowels = ['a','e','i','o','u']
consonants = ['b','c','d','f','g','h','j','k','l','m','n',\
    'p','q','r','s','t','v','w','x','z'] 
conditionalVowel = ['y']

#Conditions and Classification
if len(text) == 1:
    if text.isalpha() == True:
        if text in conditionalVowel:
            print ("Sometimes y is a vowel, and sometimes y is a consonant")
        elif text in consonants:
            print (text, "is a consonant")
        elif text in vowels:
            print (text, "is a vowel")
    else:
        print("The input should be a letter")
else:
    print("The input must be a single letter")
