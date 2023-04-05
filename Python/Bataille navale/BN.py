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
        for event in pygame.event.get():
    if event.type == pygame.QUIT:
        continuer_jeu = False
    elif event.type == pygame.MOUSEBUTTONDOWN and not partie_terminee:
        x, y = event.pos
        colonne = x // (TAILLE_CELLULE + ESPACE_CELLULE)
        ligne = y // (TAILLE_CELLULE + ESPACE_CELLULE)

        if grille_joueur[ligne][colonne] == 0:
            grille_joueur[ligne][colonne] = 2  # Marquer la case jouée
            if grille_adversaire[ligne][colonne] == 1:
                # Le joueur a touché un navire
                grille_adversaire[ligne][colonne] = 3  # Marquer la case touchée
                if est_navire_coule(grille_adversaire, ligne, colonne):
                    navire_coule = True
                    print("Vous avez coulé un navire !")
                    nb_navires_coules += 1
                    if nb_navires_coules == NB_NAVIRES:
                        print("Bravo, vous avez gagné la partie !")
                        partie_terminee = True
            else:
                # Le joueur a tiré dans l'eau
                grille_adversaire[ligne][colonne] = 2  # Marquer la case jouée
                tour_joueur = False
    elif event.type == pygame.KEYDOWN and event.key == pygame.K_SPACE and partie_terminee:
        grille_joueur = initialiser_grille()
        grille_adversaire = initialiser_grille()
        nb_navires_coules = 0
        tour_joueur = True
        navire_coule = False
        partie_terminee = False

       # Dessiner la grille de jeu
    dessiner_grille(fenetre, grille_joueur, True)
    dessiner_grille(fenetre, grille_adversaire, False)

    # Afficher les bateaux du joueur
    afficher_bateaux(fenetre, bateaux_joueur)

    # Vérifier si un bateau est touché
    for evenement in pygame.event.get():
        if evenement.type == pygame.MOUSEBUTTONDOWN and evenement.button == 1:
            x, y = evenement.pos
            if x >= MARGE_GAUCHE and x < MARGE_GAUCHE + TAILLE_CASE * NB_COLONNES \
                    and y >= MARGE_HAUT and y < MARGE_HAUT + TAILLE_CASE * NB_LIGNES:
                colonne = (x - MARGE_GAUCHE) // TAILLE_CASE
                ligne = (y - MARGE_HAUT) // TAILLE_CASE
                if grille_adversaire[ligne][colonne] == VIDE:
                    grille_adversaire[ligne][colonne] = RATE
                    joueur_courant = (joueur_courant + 1) % 2
                    message = "C'est au joueur {} de jouer".format(joueur_courant + 1)
                elif grille_adversaire[ligne][colonne] == BATEAU:
                    grille_adversaire[ligne][colonne] = TOUCHE
                    bateau_touche = False
                    for bateau in bateaux_adversaire:
                        if (ligne, colonne) in bateau:
                            bateau_touche = True
                            bateau.remove((ligne, colonne))
                            if len(bateau) == 0:
                                bateaux_adversaire.remove(bateau)
                                message = "Le joueur {} a coulé un bateau !".format(joueur_courant + 1)
                            else:
                                message = "Le joueur {} a touché un bateau !".format(joueur_courant + 1)
                            break
                    if not bateau_touche:
                        message = "Le joueur {} a déjà touché cette case !".format(joueur_courant + 1)
                else:
                    message = "Le joueur {} a déjà touché cette case !".format(joueur_courant + 1)

    # Vérifier si la partie est terminée
    if len(bateaux_joueur) == 0:
        message = "Le joueur 2 a gagné !"
        partie_terminee = True
    elif len(bateaux_adversaire) == 0:
        message = "Le joueur 1 a gagné !"
        partie_terminee = True

    # Afficher le message de statut
    afficher_message(fenetre, message)

    # Actualiser l'affichage
    pygame.display.flip()

# Quitter Pygame
pygame.quit()
