Les tests "originaux" sont ceux fournis au début du projet, les tests "nouveaux" sont ceux réalisés durant le projet.
De manière générale, les sorties de tous les tests originaux ont été légérement modifiées afin de s'adapter aux messages d'erreurs différents produits par le programme et au formalisme différent de la représentation en mémoire du programme, les spécifications des fichiers de sortie n'étant arrivé que tard dans le projet. 

Le test 05.DoubleDeclaration (originaux) ne produit pas les résultats attendus car il fait l'objet de l'analyse statique (option -a) et non de l'exécution sans option du programme. 

Le test 08.01.Optimisation ne passe pas car nous avons considéré comme constante seulement les symboles "nombres", et non les "variables" de type constante.

Les tests nouveaux impliquant des nombres négatifs ne passant pas car la grammaire d'une expression mathématique fournie ne prend pas en compte ce cas.