class Lol:
    def __init__(self, name, hp, atk):
        self.__name = name
        self.__hp = hp
        self.__atk = atk

    def setName(self,name):
        self.__name = name

    def setHp(self,hp):
        self.__hp = hp

    def setAtk(self,atk):
        self.__atk = atk

    def getName(self):
        return self.__name

    def getHp(self):
        return self.__hp

    def getAtk(self):
        return self.__atk

    def __eq__(self,other):
        if self.getHp() == other.getHp() and self.getAtk() == other.getAtk():
            return 'Two champions have same stats.'
        else:
            return 'Two champions have different stats.'

    def fight(self,other):
        a = self.getHp()
        b = other.getHp()
        while a >= 0 and b >= 0:
            a -= other.getAtk()
            b -= self.getAtk()

        if a < 0 and b <0:
            print("Draw")
        elif a > b:
            print(f"winner is {self.getName()}")
        else:
            print(f"winner is {other.getName()}")
       
        


champion1 = Lol("Garen",600, 50)
champion2 = Lol("Darius",500, 60)
champion3 = Lol("Aatrox", 500, 60)


champion1.fight(champion2)
champion2.fight(champion3)

print(champion1.__eq__(champion2))


print("Name is",champion3.getName())
print("Max HP is",champion3.getHp())
print("Attack point is ",champion3.getAtk())

champion3 = Lol('Aatrox',450, 63)

print("Name is",champion3.getName())
print("Max HP is",champion3.getHp())
print("Attack point is ",champion3.getAtk())

champion1.fight(champion3)


