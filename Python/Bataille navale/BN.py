import random
import pygame
import sys

# Initialisation de Pygame
pygame.init()

# Taille de la fenêtre
largeur_fenetre = 1000
hauteur_fenetre = 600

# Couleurs
BLANC = (255, 255, 255)
NOIR = (0, 0, 0)
BLEU = (0, 0, 255)
ROUGE = (255, 0, 0)
GRIS = (128, 128, 128)

# Création de la fenêtre
fenetre = pygame.display.set_mode((largeur_fenetre, hauteur_fenetre))
pygame.display.set_caption("Bataille navale")

# Polices
police_titre = pygame.font.SysFont("calibri", 50)
police_bouton = pygame.font.SysFont("calibri", 30)

# Variables
partie_terminee = False
taille_case = 50
marge = 25
grille_joueur = []
grille_ordi = []

# Création des grilles
for i in range(10):
    ligne_joueur = []
    ligne_ordi = []
    for j in range(10):
        ligne_joueur.append(0)
        ligne_ordi.append(0)
    grille_joueur.append(ligne_joueur)
    grille_ordi.append(ligne_ordi)

# Placement des bateaux du joueur
bateaux_joueur = {"Porte-avion": 5, "Croiseur": 4, "Contre-torpilleur": 3, "Sous-marin": 3, "Torpilleur": 2}
for bateau in bateaux_joueur:
    placement_valide = False
    while not placement_valide:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()
        fenetre.fill(BLANC)
        message_titre = police_titre.render("Placement des bateaux", True, NOIR)
        fenetre.blit(message_titre, [largeur_fenetre/2 - message_titre.get_width()/2, 50])
        message_bateau = police_bouton.render(bateau + " (" + str(bateaux_joueur[bateau]) + " cases)", True, NOIR)
        fenetre.blit(message_bateau, [marge, 150])
        pygame.draw.rect(fenetre, GRIS, [marge, 200, taille_case*10, taille_case*10])
        for i in range(10):
            for j in range(10):
                if grille_joueur[i][j] == 1:
                    pygame.draw.rect(fenetre, BLEU, [marge+j*taille_case, 200+i*taille_case, taille_case, taille_case])
        message_aide = police_bouton.render("Cliquez sur les cases pour placer le bateau. Utilisez les flèches pour changer l'orientation.", True, NOIR)
        fenetre.blit(message_aide, [marge, 550])
        pygame.display.update()

        # Vérification du placement du bateau
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()
            elif event.type == pygame.MOUSEBUTTONDOWN and event.button == 1:
                x, y = event.pos
                colonne = (x - marge) // taille_case
                ligne = (y - 200) // taille_case
                if
