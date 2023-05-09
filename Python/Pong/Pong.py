import pygame
import random
 
# Initialisation de Pygame
pygame.init()
 
# Couleurs
BLANC = (255, 255, 255)
NOIR = (0, 0, 0)
 
# Taille de l'écran
LARGEUR = 800
HAUTEUR = 600
 
# Création de l'écran
ecran = pygame.display.set_mode((LARGEUR, HAUTEUR))
pygame.display.set_caption("Pong")
 
# Création des raquettes et de la balle
raquette1 = pygame.Rect(50, (HAUTEUR/2) - 40, 10, 80)
raquette2 = pygame.Rect(LARGEUR - 60, (HAUTEUR/2) - 40, 10, 80)
balle = pygame.Rect(LARGEUR/2 - 10, HAUTEUR/2 - 10, 20, 20)
 
# Vitesse initiale de la balle
vit_x = 5 * random.choice((1, -1))
vit_y = 5 * random.choice((1, -1))
 
# Boucle principale du jeu
jeu_en_cours = True
while jeu_en_cours:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            jeu_en_cours = False
 
    # Mouvement de la raquette 1
    touche = pygame.key.get_pressed()
    if touche[pygame.K_UP]:
        raquette1.y -= 5
    if touche[pygame.K_DOWN]:
        raquette1.y += 5
 
    # Mouvement de la raquette 2
    if balle.y < raquette2.y:
        raquette2.y -= 3
    if balle.y > raquette2.y + 80:
        raquette2.y += 3
 
    # Mouvement de la balle
    balle.x += vit_x
    balle.y += vit_y
 
    # Rebond de la balle
    if balle.colliderect(raquette1) or balle.colliderect(raquette2):
        vit_x = -vit_x
    if balle.y < 0 or balle.y > HAUTEUR - 20:
        vit_y = -vit_y
 
    # Affichage de l'écran
    ecran.fill(NOIR)
    pygame.draw.rect(ecran, BLANC, raquette1)
    pygame.draw.rect(ecran, BLANC, raquette2)
    pygame.draw.ellipse(ecran, BLANC, balle)
    pygame.display.flip()
 
    # Vitesse du jeu
    pygame.time.Clock().tick(60)
 
# Quitter Pygame
pygame.quit()
