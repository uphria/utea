from random import randint

names = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", \
        "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", \
        "U", "V", "W", "X", "Y", "Z"]

def validTeams():
    teamNum = input("How many teams will participate? ")
    while not teamNum.isdigit() or not int(teamNum) >= 4 or not int(teamNum) <= 20 or int(teamNum)%2 != 0:
        teamNum = input("How many teams will participate? ")
    return int(teamNum)

def genTeams(numOfTeams):
    teams = []
    index = 0
    while index < numOfTeams:
        team = names[randint(0, numOfTeams-1)]
        if team not in teams:
            teams.append(team)
            index += 1
    return teams

def genGames(teams):
    games = [] #holds game
    game = [] #holds teams
    pair = 1
    for index in range(len(teams)):
        #add second team, add the game to games, reset game
        if pair % 2 == 0:
            game.append(teams[index])
            games.append(game)
            game = []
            pair += 1
        #add first team, pair is even for next iteration
        else:
            game.append(teams[index])
            pair += 1
    return games

numOfTeams = validTeams()
print(names[:(numOfTeams)])
teams = genTeams(numOfTeams)
games = genGames(teams)
index = 1
for game in games:
    print("Game " + str(index) + ") " + str(game))
    index += 1

#using while for genGames:
'''
index = 0
games = []
while (index < len(teams)):
    game = []
    game.append(teams[index])
    game.append(teams[index+1])
    games.append(game)
    index += 2
return games
'''