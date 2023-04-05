import random

# Définition des couleurs et des valeurs des cartes
couleurs = ['Coeur', 'Carreau', 'Trèfle', 'Pique']
valeurs = ['As', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'Valet', 'Dame', 'Roi']

# Création d'un jeu de cartes
jeu_de_cartes = []
for couleur in couleurs:
    for valeur in valeurs:
        jeu_de_cartes.append(f"{valeur} de {couleur}")

# Mélange du jeu de cartes
random.shuffle(jeu_de_cartes)

# Distribution des cartes aux joueurs
joueur_1 = jeu_de_cartes[:len(jeu_de_cartes)//2]
joueur_2 = jeu_de_cartes[len(jeu_de_cartes)//2:]

# Définition des fonctions de jeu
def bataille(joueur_1, joueur_2):
    carte_1 = joueur_1.pop(0)
    carte_2 = joueur_2.pop(0)
    print(f"Joueur 1 a joué : {carte_1}")
    print(f"Joueur 2 a joué : {carte_2}")
    if valeurs.index(carte_1.split()[0]) > valeurs.index(carte_2.split()[0]):
        print("Joueur 1 gagne la bataille !")
        joueur_1.extend([carte_1, carte_2])
    elif valeurs.index(carte_1.split()[0]) < valeurs.index(carte_2.split()[0]):
        print("Joueur 2 gagne la bataille !")
        joueur_2.extend([carte_2, carte_1])
    else:
        print("Égalité !")
        bataille(joueur_1, joueur_2)

def jouer(joueur_1, joueur_2):
    tour = 1
    while joueur_1 and joueur_2:
        print(f"\nTour {tour} :")
        bataille(joueur_1, joueur_2)
        tour += 1
    if joueur_1:
        print("\nJoueur 1 gagne la partie !")
    else:
        print("\nJoueur 2 gagne la partie !")

# Jouer le jeu
jouer(joueur_1, joueur_2)
