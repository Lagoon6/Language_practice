import random

computerNumber = ["0","0","0"]
computerNumber[0] = str(random.randint(1,9))
computerNumber[1] = str(random.randint(0,9))
computerNumber[2] = str(random.randint(0,9))



strike = 0

print(computerNumber)

while strike < 3:

    strike = 0
    ball = 0
    out = 0

    myNumber = []
    guessNumber = input("숫자를 입력하시오:")
    for i in str(guessNumber):
        myNumber.append(i)

    for i in range(len(computerNumber)):
        if myNumber[i] in computerNumber and myNumber[i] == computerNumber[i]:
            strike +=1
        
        elif myNumber[i] in computerNumber and myNumber[i] != computerNumber[i]:
            ball +=1
        
        else:
            out +=1        
    
    print(f"{out}out!  {strike}Strike!  {ball}Ball!")



