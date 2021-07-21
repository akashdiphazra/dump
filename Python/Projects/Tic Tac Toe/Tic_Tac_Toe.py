import random

def draw_board(board):
  print('\t\t\t   |   |')
  print('\t\t\t '+ board[7] + ' | ' + board[8] + ' | ' + board[9])
  print('\t\t\t   |   |')
  print('\t\t\t-----------')
  print('\t\t\t   |   |')
  print('\t\t\t '+ board[4] + ' | ' + board[5] + ' | ' + board[6])
  print('\t\t\t   |   |')
  print('\t\t\t-----------')
  print('\t\t\t '+ board[1] + ' | ' + board[2] + ' | ' + board[3])
  print('\t\t\t   |   |')
  print('\t\t\t   |   |')
  

def input_player(): 
  letter = ''
  while not (letter == 'X' or letter == 'O'):
    print("Enter your choice 'X' or 'O': ")
    letter = input().upper()
  if letter == 'X':
    return ['X','O']   
  if letter == 'O':
    return ['O','X']


def whogoesfirst():
  if random.randint(0, 1) == 0:
    return 'computer'
  else:
    return 'player'           

def playagain():
  print('Do you want to play again? Yes or No? (y or n)')
  return input().lower().startswith('y') 

def makemove(board, letter, move):
  board[move] = letter

def iswinner(bo, le):
  return ((bo[7] == le and bo[8] == le and bo[9] == le)  or
          (bo[4] == le and bo[5] == le and bo[6] == le)  or
          (bo[1] == le and bo[2] == le and bo[3] == le)  or
          (bo[7] == le and bo[4] == le and bo[1] == le)  or
          (bo[8] == le and bo[5] == le and bo[2] == le)  or
          (bo[9] == le and bo[6] == le and bo[3] == le)  or
          (bo[7] == le and bo[5] == le and bo[3] == le)  or
          (bo[9] == le and bo[5] == le and bo[1] == le))

def getboardcopy(board):
  duplicateboard = []
  for i in board:
    duplicateboard.append(i)
  return duplicateboard

def isspacefree(board, move):
  return board[move] == ' '  

def getplayermoves(board):
  move = ''
  while move not in '1 2 3 4 5 6 7 8 9'.split() or not isspacefree(board, int(move)):
    print('What is your next move? (1-9)')
    move = input()
    return int(move)

def choose_random_move_from_list(board, movelist):
  possiblemoves = []
  for i in movelist:
    if isspacefree(board, i):
      possiblemoves.append(i)
  if len(possiblemoves) != 0:
    return random.choice(possiblemoves)
  else:
    return None    

def getcomptermoves(board, computerletter):
  if computerletter == 'X':
    playerletter = 'O'
  else:
    playerletter = 'X'

  for i in range(1, 10):
    copy = getboardcopy(board)
    if isspacefree(copy, i):
      makemove(copy, computerletter, i)
      if iswinner(copy, computerletter):
        return i

  for i in range(1, 10):
    copy = getboardcopy(board)
    if isspacefree(copy, i):
      makemove(copy, playerletter, i)
      if iswinner(copy, playerletter):
        return i

  move = choose_random_move_from_list(board,[1, 3, 7, 9])
  if move!= None:
    return move
  elif isspacefree(board, 5):
    return 5 
  else:
    return choose_random_move_from_list(board, [2, 4, 6, 8])   
 
 
def isboardfull(board):
  for i in range(1, 10):
    if isspacefree(board, i):
      return False
  return True  

name = input('Enter your name: ')
print('Welcome to Tic Tac Toe:')
print('Player Name: {} '.format(name))
while True:
  theboard = [' '] * 10
  playerletter, computerletter = input_player()
  print('The board structure for {}:'.format(name))
  draw_board([' ', '1', '2', '3', '4', '5', '6', '7', '8','9'])
  turn = whogoesfirst()
  if turn == 'player':
    print(name + ' will go first')
    print('Remember')
    draw_board([' ', '1', '2', '3', '4', '5', '6', '7', '8','9'])
  else:
    print('The ' + turn + ' will go first')
  
  gameplaying = True
  while gameplaying:
    if turn == 'player':
      move = getplayermoves(theboard)
      makemove(theboard, playerletter, move)
      if iswinner(theboard, playerletter):
        draw_board(theboard)
        print('Hooray! You have won the game!')
        gameplaying = False      
      else:
        if isboardfull(theboard):
          print('The game is tie {}:'.format(name))
          draw_board(theboard)
          break
        else:
          turn = 'computer'
    else:
      move = getcomptermoves(theboard, computerletter)
      makemove(theboard, computerletter, move) 
      draw_board(theboard)

      if iswinner(theboard, computerletter):
        print('The computer has beaten you! {} You lose.'.format(name))
        draw_board(theboard)
        gameplaying = False
      else:
          if isboardfull(theboard):
            print('The game is tie {}:'.format(name))
            draw_board(theboard)
            break
          else:
            turn = 'player'
  
  if not playagain():
    break        
