import random
times = 3
secret = random.randint(1,18)
print('…………我爱你c工作室…………')
temp=input("不妨猜一下我心里想的哪个数字：")
guess=int(temp)
while guess != secret:
    temp=input("猜错了，请重新输入吧：")
    guess=int(temp)
    if guess == secret:
        print("卧槽，你是我心里的蛔虫吗？！")
        print("哼，猜中了也没有奖励！")
    else:
        if guess > secret:
            print("hh,大了大了~")
        else:
            print("嘿，小了小了")
        if times >0 :
            print(" 再试一次吧： ",end="")
        else:
            print("机会用光咯")
print("游戏结束，不玩啦 ^_^")

