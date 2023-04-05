import random

print("Bienvenue dans le jeu de Pierre-Feuille-Ciseaux !")
print("\nVous allez jouer contre l'ordinateur.")

# Définition des choix possibles pour l'ordinateur
choices = ["pierre", "feuille", "ciseaux"]

# Boucle principale du jeu
while True:
    # Demander à l'utilisateur de faire son choix
    user_choice = input("\nChoisissez Pierre, Feuille ou Ciseaux : ")
    
    # Vérifier que le choix de l'utilisateur est valide
    if user_choice not in choices:
        print("\nChoix invalide. Veuillez réessayer.")
        continue
    
    # Faire un choix aléatoire pour l'ordinateur
    computer_choice = random.choice(choices)
    
    # Afficher les choix
    print("\nVous avez choisi :", user_choice)
    print("L'ordinateur a choisi :", computer_choice)
    
    # Déterminer le gagnant
    if user_choice == computer_choice:
        print("\nMatch nul !")
    elif (user_choice == "Pierre" and computer_choice == "Ciseaux") or \
         (user_choice == "Feuille" and computer_choice == "Pierre") or \
         (user_choice == "Ciseaux" and computer_choice == "Feuille"):
        print("\nVous avez gagné !")
    else:
        print("\nL'ordinateur a gagné !")
    
    # Demander à l'utilisateur s'il veut rejouer
    play_again = input("\nVoulez-vous jouer de nouveau ? (Oui/Non) ")
    if play_again.lower() != "oui":
        break
        
print("\nMerci d'avoir joué !")
