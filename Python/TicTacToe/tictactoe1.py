import pygame
import sys

# Initialisation de Pygame
pygame.init()

# Définition de la fenêtre de jeu
size = (300, 300)
screen = pygame.display.set_mode(size)
pygame.display.set_caption("Tic Tac Toe")

# Couleurs
black = (0, 0, 0)
white = (255, 255, 255)

# Variables pour la grille et les pièces
grid = [["", "", ""],
        ["", "", ""],
        ["", "", ""]]
player = "X"
winner = None
draw = False

# Fonction pour dessiner la grille
def draw_grid():
    for x in range(1, 3):
        pygame.draw.line(screen, black, (0, x * 100), (300, x * 100), 2)
        pygame.draw.line(screen, black, (x * 100, 0), (x * 100, 300), 2)

# Fonction pour dessiner les pièces
def draw_pieces():
    global grid
    for row in range(3):
        for col in range(3):
            if grid[row][col] == "X":
                pygame.draw.line(screen, black, (col * 100 + 15, row * 100 + 15), (col * 100 + 85, row * 100 + 85), 2)
                pygame.draw.line(screen, black, (col * 100 + 85, row * 100 + 15), (col * 100 + 15, row * 100 + 85), 2)
            elif grid[row][col] == "O":
                pygame.draw.circle(screen, black, (col * 100 + 50, row * 100 + 50), 35, 2)

# Fonction pour vérifier si le jeu est terminé
def check_game_over():
    global grid, winner, draw
    for row in range(3):
        if (grid[row][0] == grid[row][1] == grid[row][2]) and grid[row][0] != "":
            winner = grid[row][0]
            pygame.draw.line(screen, white, (0, row * 100 + 50), (300, row * 100 + 50), 2)
            break
    for col in range(3):
        if (grid[0][col] == grid[1][col] == grid[2][col]) and grid[0][col] != "":
            winner = grid[0][col]
            pygame.draw.line(screen, white, (col * 100 + 50, 0), (col * 100 + 50, 300), 2)
            break
    if (grid[0][0] == grid[1][1] == grid[2][2]) and grid[0][0] != "":
        winner = grid[0][0]
        pygame.draw.line(screen, white, (50, 50), (250, 250), 2)
    elif (grid[0][2] == grid[1][1] == grid[2][0]) and grid[0][2] != "":
        winner = grid[0][2]
        pygame.draw.line(screen, white, (250, 50), (50, 250), 2)
    elif all(all(row) for row in grid):
        draw = True

# Fonction pour afficher le texte à la fin du jeu
def show_game_over_text():
    font = pygame.font
    if winner:
        text = font.render(f"{winner} a gagné !", True, white)
    elif draw:
        text = font.render("Match nul !", True, white)
    screen.blit(text, (80, 280))

# Boucle principale
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        elif event.type == pygame.MOUSEBUTTONDOWN and not winner and not draw:
            x, y = pygame.mouse.get_pos()
            row, col = y // 100, x // 100
            if grid[row][col] == "":
                grid[row][col] = player
                if player == "X":
                    player = "O"
                else:
                    player = "X"

    screen.fill(white)
    draw_grid()
    draw_pieces()
    check_game_over()
    if winner or draw:
        show_game_over_text()

    pygame.display.update()
