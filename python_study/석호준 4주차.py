import random

print("<< Choose a menu>>")
menus = {1:"play  word game",2:"view a rank board",3:"exit"}
for item in menus.items():
    print(item[0],":",item[1])



f = open("words.txt",'r')   
wordDict = dict()
alreadyWord = set()
life = 3
    
while True:
    line = f.readline()   # []형식이 아님
    if not line:
        break
    word = line.split(':') # []형식으로 바뀜
    word[0] = word[0].strip()
    word[1] = word[1].strip()
    wordDict[word[0]] = word[1] #word[2:20] = 뜻   ex {abc: 가나다, bcd:나다하}
    




def checkWord(firstWord,nextWord):
    if (firstWord[0] == nextWord[-1])and (firstWord in wordDict.keys())  and (firstWord not in alreadyWord) :
        userMean = wordDict.get(firstWord)
        print(f">>>>{userMean}")
        return True
    
    else:
        return False




def findWord(x):
    newWord = []
    wordList_keys = wordDict.keys() #리스트 형식
    for i in wordList_keys:
        if i.startswith(x) and i not in alreadyWord :
            newWord.append(i)
            

    a = random.choice(newWord)
    meaning = wordDict.get(a)
    print(f">>>computer: {a},{meaning}")
    alreadyWord.add(a)        
    return a



    

score = 0 
firstWord = input("who are you?")    
name = firstWord

while True:
    print("")
    print("Computer's turn")
    nextWord = findWord(firstWord[-1])
    print("")
    print(f"{name}'s turn")
    firstWord = input("input a word:")
    if checkWord(firstWord,nextWord) == True:
        alreadyWord.add(firstWord)
        score = score+ len(firstWord)
        print(f"Correct! (score: {score})")
     
    


    else :
        life = life - 1
        print(f"남은 라이프는 {life}")
        if life == 0:
            print("game end")
            break
       

            

