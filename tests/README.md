Les tests "originaux" sont ceux fournis au d�but du projet, les tests "nouveaux" sont ceux r�alis�s durant le projet.
De mani�re g�n�rale, les sorties de tous les tests originaux ont �t� l�g�rement modifi�es afin de s'adapter aux messages d'erreurs diff�rents produits par le programme et au formalisme diff�rent de la repr�sentation en m�moire du programme, les sp�cifications des fichiers de sortie n'�tant arriv� que tard dans le projet. 

Le test 05.DoubleDeclaration (originaux) ne produit pas les r�sultats attendus car il fait l'objet de l'analyse statique (option -a) et non de l'ex�cution sans option du programme. 

Le test 08.01.Optimisation ne passe pas car nous avons consid�r� comme constante seulement les symboles "nombres", et non les "variables" de type constante.

Les tests nouveaux impliquant des nombres n�gatifs ne passant pas car la grammaire d'une expression math�matique fournie ne prend pas en compte ce cas.