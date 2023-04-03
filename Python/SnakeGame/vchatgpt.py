import pygame
import random

# Initialisation de Pygame
pygame.init()

# Définition des couleurs
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
GREEN = (0, 255, 0)
RED = (255, 0, 0)

# Définition de la taille de l'écran
SCREEN_WIDTH = 1080
SCREEN_HEIGHT = 720

# Définition de la taille d'une case
BLOCK_SIZE = 10

# Définition de la vitesse du serpent
SPEED = 20

# Initialisation de l'écran
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption("Snake Game")

# Fonction pour afficher le serpent
def draw_snake(snake_block, snake_list):
    for x in snake_list:
        pygame.draw.rect(screen, GREEN, [x[0], x[1], snake_block, snake_block])

# Fonction pour afficher un message
def message(msg, color):
    font_style = pygame.font.SysFont(None, 50)
    message = font_style.render(msg, True, color)
    screen.blit(message, [SCREEN_WIDTH / 6, SCREEN_HEIGHT / 3])

# Boucle principale du jeu
def game_loop():
    game_over = False
    game_close = False

    # Initialisation de la position du serpent
    x1 = SCREEN_WIDTH / 2
    y1 = SCREEN_HEIGHT / 2

    # Initialisation de la direction du serpent
    x1_change = 0       
    y1_change = 0

    # Initialisation de la liste du serpent
    snake_List = []
    Length_of_snake = 1

    # Initialisation de la position de la pomme
    foodx = round(random.randrange(0, SCREEN_WIDTH - BLOCK_SIZE) / 10.0) * 10.0
    foody = round(random.randrange(0, SCREEN_HEIGHT - BLOCK_SIZE) / 10.0) * 10.0

    # Boucle de jeu
    while not game_over:

        # Boucle en cas de fermeture de la fenêtre
        while game_close == True:
            screen.fill(WHITE)
            message("You Lost! Press Q-Quit or C-Play Again", RED)
            pygame.display.update()

            # Gestion des événements clavier
            for event in pygame.event.get():
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_q:
                        game_over = True
                        game_close = False
                    if event.key == pygame.K_c:
                        game_loop()

        # Gestion des événements clavier
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                game_over = True
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT:
                    x1_change = -BLOCK_SIZE
                    y1_change = 0
                elif event.key == pygame.K_RIGHT:
                    x1_change = BLOCK_SIZE
                    y1_change = 0
                elif event.key == pygame.K_UP:
                    y1_change = -BLOCK_SIZE
                    x1_change = 0
                elif event.key == pygame.K_DOWN:
                    y1_change = BLOCK_SIZE
                    x1_change = 0

        # Vérification des collisions avec les bords de l'écran
        if x1 >= SCREEN_WIDTH or x1 < 0 or y1 >= SCREEN_HEIGHT or y1 < 0:
            game_close
            # Mise à jour de la position du serpent
        x1 += x1_change
        y1 += y1_change

        # Affichage de la pomme
        pygame.draw.rect(screen, RED, [foodx, foody, BLOCK_SIZE, BLOCK_SIZE])

        # Ajout de la position actuelle du serpent à la liste
        snake_Head = []
        snake_Head.append(x1)
        snake_Head.append(y1)
        snake_List.append(snake_Head)

        # Suppression de la première case de la liste si la longueur du serpent dépasse la longueur maximale
        if len(snake_List) > Length_of_snake:
            del snake_List[0]

        # Vérification des collisions avec le corps du serpent
        for x in snake_List[:-1]:
            if x == snake_Head:
                game_close = True

        # Affichage du serpent
        draw_snake(BLOCK_SIZE, snake_List)
        pygame.display.update()

        # Vérification de la collision avec la pomme
        if x1 == foodx and y1 == foody:
            foodx = round(random.randrange(0, SCREEN_WIDTH - BLOCK_SIZE) / 10.0) * 10.0
            foody = round(random.randrange(0, SCREEN_HEIGHT - BLOCK_SIZE) / 10.0) * 10.0
            Length_of_snake += 1

        # Rafraîchissement de l'écran
        screen.fill(WHITE)

        # Affichage de la longueur du serpent
        font_style = pygame.font.SysFont(None, 30)
        value = font_style.render("Score: " + str(Length_of_snake - 1), True, BLACK)
        screen.blit(value, [0, 0])

        # Mise à jour de l'écran
        pygame.display.update()

        # Réglage de la vitesse du serpent
        clock = pygame.time.Clock()
        clock.tick(SPEED)

    # Fermeture de Pygame
    pygame.quit()
    quit()

# Lancement du jeu
game_loop()
