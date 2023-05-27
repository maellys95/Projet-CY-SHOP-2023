CY SHOP 	 	 	
Le but de ce projet est de créer un programme C permettant la gestion de stocks et de clients dans un magasin. Il permet aux employés de suivre les niveaux de stock de chaque produit, de passer des commandes et de gérer la base de données des clients.
Nous sommes un magasin de T-Shirt nommé Cadenas où nous vendons exclusivement 4 T-Shirt nommés Purple, Red, Blue et Green.


Prérequis:
Compilateur C 
Bibliothèques standard du langage C 
Système d'exploitation compatible 
Utilisation
Voici comment utiliser notre programme :
Sélectionnez dans le menu principal le mode de votre choix
Si vous sélectionnez le mode gestion vous pourrez soit vérifier les stocks, soit augmenter les stocks ou baisser les stocks.
Si vous sélectionnez le mode achat vous devrez renseigner si vous avez ou non un compte. Après récupération ou création de votre compte vous pourrez faire des achats ou supprimer votre compte.
Vous pouvez ensuite quitter le programme ou recommencer.
Structure du Projet
Le programme est constitué d’un menu principal et de deux sous-menus :
 Mode gestion 
 Mode achat.
Avertissement
Voici les premiers bugs remarqués :
Dans la fonction achat, le programme plante si les stocks sont inférieurs ou égaux à 0.
La fonction achat ne prend pas en compte les augmentations de stocks.
