import pygame
from pygame.locals import *

pygame.init()

# Dimensions de l'écran
screen_width = 640
screen_height = 480

# Initialisation de l'écran
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("Mon jeu FPS")

# Couleur de fond
bg_color = (0, 0, 0)

# Position du joueur
player_x = screen_width // 2
player_y = screen_height // 2

# Vitesse de déplacement
move_speed = 5

# Boucle principale
while True:
    # Gestion des événements
    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            sys.exit()

    # Gestion des touches
    keys = pygame.key.get_pressed()
    if keys[K_UP]:
        player_y -= move_speed
    elif keys[K_DOWN]:
        player_y += move_speed
    elif keys[K_LEFT]:
        player_x -= move_speed
    elif keys[K_RIGHT]:
        player_x += move_speed

    # Effacement de l'écran
    screen.fill(bg_color)

    # Affichage du joueur
    pygame.draw.circle(screen, (255, 255, 255), (player_x, player_y), 10)

    # Rafraîchissement de l'écran
    pygame.display.flip()
