import pygame
import random

# Initialisation de Pygame
pygame.init()

# Définition de la taille de la fenêtre
screen_width = 640
screen_height = 480
screen = pygame.display.set_mode((screen_width, screen_height))

# Définition des couleurs
black = (0, 0, 0)
white = (255, 255, 255)

# Définition des positions et des dimensions des éléments du jeu
paddle_width = 15
paddle_height = 60
paddle_speed = 5

ball_width = 15
ball_speed = 5

player1_x = 50
player1_y = screen_height/2 - paddle_height/2

player2_x = screen_width - 50 - paddle_width
player2_y = screen_height/2 - paddle_height/2

ball_x = screen_width/2 - ball_width/2
ball_y = screen_height/2 - ball_width/2
ball_direction_x = random.choice([-1, 1])
ball_direction_y = random.choice([-1, 1])

# Définition des scores des joueurs
player1_score = 0
player2_score = 0

# Boucle principale du jeu
running = True
while running:
    # Gestion des événements
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Gestion des mouvements des joueurs
    keys = pygame.key.get_pressed()
    if keys[pygame.K_w]:
        player1_y -= paddle_speed
    if keys[pygame.K_s]:
        player1_y += paddle_speed
    if keys[pygame.K_UP]:
        player2_y -= paddle_speed
    if keys[pygame.K_DOWN]:
        player2_y += paddle_speed

    # Gestion des limites de l'écran pour les joueurs
    if player1_y < 0:
        player1_y = 0
    if player1_y + paddle_height > screen_height:
        player1_y = screen_height - paddle_height
    if player2_y < 0:
        player2_y = 0
    if player2_y + paddle_height > screen_height:
        player2_y = screen_height - paddle_height

    # Gestion des mouvements de la balle
    ball_x += ball_speed * ball_direction_x
    ball_y += ball_speed * ball_direction_y

    # Gestion des collisions avec les murs
    if ball_y < 0 or ball_y + ball_width > screen_height:
        ball_direction_y = -ball_direction_y
    if ball_x < 0:
        ball_direction_x = -ball_direction_x
        player2_score += 1
        ball_x = screen_width/2 - ball_width/2
        ball_y = screen_height/2 - ball_width/2
        ball_direction_x = random.choice([-1, 1])
        ball_direction_y = random.choice([-1, 1])
    if ball_x + ball_width > screen_width:
        ball_direction_x = -ball_direction_x
        player1_score += 1
        ball_x = screen_width/2 - ball_width/2
        ball_y = screen_height/2 - ball_width/2
        ball_direction_x = random.choice([-1, 1])
        ball_direction_y = random.choice([-1, 1
    # Gestion des collisions avec les raquettes
    if ball_x < player1_x + paddle_width and ball_y + ball_width > player1_y and ball_y < player1_y + paddle_height:
        ball_direction_x = 1

    if ball_x + ball_width > player2_x and ball_y + ball_width > player2_y and ball_y < player2_y + paddle_height:
        ball_direction_x = -1

    # Effacement de l'écran
    screen.fill(black)

    # Dessin des éléments du jeu
    pygame.draw.rect(screen, white, (player1_x, player1_y, paddle_width, paddle_height))
    pygame.draw.rect(screen, white, (player2_x, player2_y, paddle_width, paddle_height))
    pygame.draw.rect(screen, white, (ball_x, ball_y, ball_width, ball_width))

    # Affichage des scores des joueurs
    font = pygame.font.Font(None, 36)
    player1_score_text = font.render(str(player1_score), True, white)
    player2_score_text = font.render(str(player2_score), True, white)
    screen.blit(player1_score_text, (screen_width/4 - player1_score_text.get_width()/2, 20))
    screen.blit(player2_score_text, (3*screen_width/4 - player2_score_text.get_width()/2, 20))

    # Mise à jour de la fenêtre
    pygame.display.flip()

# Fermeture de Pygame
pygame.quit()
