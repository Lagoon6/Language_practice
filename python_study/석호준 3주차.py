import random
PRICE = 300
FEE = 500
cities = ["start","seoul","tokyo","sydney",
          "L.A.","cairo","phuket","new delhi","hanoi","paris"]
owner =["-",0,0,0,0,0,0,0,0,0]

player = [0,0]
playerCoin = [5000,5000]
winner = -1

def dice():
    dice = [1,2,3,4,5,6]
    x = random.choice(dice)
    return x



def turn(x):
    diceValue = dice()
    player[x] += diceValue
    player[x] %= 10
    print(f"player{(x+1)} got {diceValue}")
    
    if owner[player[x]] == "-":
        print("start")
    elif owner[player[x]] == 0:
        print(f"{cities[player[x]]} (empty)")
        if playerCoin[x] >= PRICE:
            playerCoin[x] = playerCoin[x]- PRICE
            owner[player[x]] = (x+1) #1일때 player1 owner 2일때 player2 owner
            print(f"player{(x+1)} buys {cities[player[x]]}")
        else:
            print(f"player{(x+1)} can't buy city ")
    elif owner[player[x]] == (x+1):
        print(f"{cities[player[x]]} ({owner[player[x]]})")
    else:
        print(f"{cities[player[x]]} ({owner[player[x]]})")
        if playerCoin[x] > FEE:
            playerCoin[x]= playerCoin[x]- FEE
            playerCoin[(x+1)%2]= playerCoin[(x+1)%2]+ FEE 
            print(f"player{x+1} pays fee")
            
        else:
            winner = ((x+1)%2)
            print(f"player{(x+1)} is bankrupted")
    print(f"player{(x+1)}'s balance is {playerCoin[x]}")
            
        
    



#프로그램     
for i in range(30):
    print("")
    print("<turn %d>\n" %(i+1))
    
    for r in range(2):
        turn(r)   
    if winner ==1:
        print(f"winner is player {winner+1} ")
    elif winner ==0:
        print(f"winner is player{winner+1}")
            
if winner == -1:
    if playerCoin[0] > playerCoin[1]:
        print("winner is player1")
    elif playerCoin[0] < playerCoin[1]:
        print("winner is player2")
    else:
        print("무승부")
    

    
