import pygame

# Initialisation de Pygame
pygame.init()

# Variables globales
TAILLE_FENETRE = 800
GRIS = (200, 200, 200)
BLANC = (255, 255, 255)
ROUGE = (255, 0, 0)
COULEUR_TEXTE = (255, 255, 255)  # Blanc
joueur1 = 'X'
joueur2 = 'O'
tour = joueur1
tableau = [' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ']
jeu_fini = False
gagnant = None

# Création de la fenêtre de jeu
fenetre = pygame.display.set_mode((TAILLE_FENETRE, TAILLE_FENETRE + 50))
pygame.display.set_caption("Tic Tac Toe")

# Fonctions
def afficher_tableau():
    font = pygame.font.SysFont(None, 100)
    for i in range(3):
        for j in range(3):
            case = tableau[i*3 + j]
            texte = font.render(case, True, BLANC)
            x = j * (TAILLE_FENETRE // 3) + (TAILLE_FENETRE // 6)
            y = i * (TAILLE_FENETRE // 3) + (TAILLE_FENETRE // 6)
            texte_rect = texte.get_rect(center=(x, y))
            fenetre.blit(texte, texte_rect)

def placer_symbole(case):
    global tour
    global tableau
    global jeu_fini
    global gagnant
    if tableau[case] == ' ':
        tableau[case] = tour
        if est_gagnant(tour):
            gagnant = tour
            jeu_fini = True
        elif est_match_nul():
            jeu_fini = True
        else:
            if tour == joueur1:
                tour = joueur2
            else:
                tour = joueur1
    else:
        print("Cette case est déjà occupée. Choisissez une autre case.")

def est_gagnant(joueur):
    for i in range(3):
        # Vérifier les lignes
        if tableau[i*3] == joueur and tableau[i*3+1] == joueur and tableau[i*3+2] == joueur:
            return True
        # Vérifier les colonnes
        if tableau[i] == joueur and tableau[i+3] == joueur and tableau[i+6] == joueur:
            return True
    # Vérifier les diagonales
    if tableau[0] == joueur and tableau[4] == joueur and tableau[8] == joueur:
        return True
    if tableau[2] == joueur and tableau[4] == joueur and tableau[6] == joueur:
        return True
    return False

def est_match_nul():
    if ' ' not in tableau:
        return True
    else:
        return False
    
def afficher_message_fin():
    font = pygame.font.Font(None, TAILLE_FENETRE // 6)
    if gagnant == 'X':
        message = "Le joueur X a gagné !"
    elif gagnant == 'O':
        message = "Le joueur O a gagné !"
    else:
        message = "Match nul !"
    texte = font.render(message, True, COULEUR_TEXTE)
    rect = texte.get_rect(center=(TAILLE_FENETRE // 2, TAILLE_FENETRE // 2))
    fenetre.blit(texte, rect)
    
# Boucle de jeu
continuer = True
while continuer:
    # Gestion des événements
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            continuer = False
        elif event.type == pygame.MOUSEBUTTONDOWN and not jeu_fini:
            x, y = pygame.mouse.get_pos()
            colonne = x // (TAILLE_FENETRE // 3)
            ligne = y // (TAILLE_FENETRE // 3)
            case = ligne * 3 + colonne
            placer_symbole(case)
            afficher_tableau()
            if jeu_fini:
                afficher_message_fin()
    
    # Actualisation de l'écran
    pygame.display.update()

# Fermeture de Pygame
pygame.quit()
