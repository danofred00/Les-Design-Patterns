# Abstract Factory Pattern

Ce pattern s'apparente un peu a Factory Method, mais vous allez très vite comprendre qu'il y a pas mal de points de differences.

Avec Factory Method, on avait une methode pour creer des animaux en fonction de leurs type, la problematique ici est que pour rajouter de nouveaux animaux, il faudra a chaque fois modifier le code la fonction create dans Animal Factory, ce qui peut etre parfois tres long et ca pose aussi ce probleme de trop de conditions dans une seule methode.

Pour palier a ce probleme, l'on va plutot creer une classe AbstractAnimalFactory qui sera en realite une interface qui va posseder une methode pour la creation d'un Animal. Et donc ensuite pour chaque type d'animal, on va Creer une classe Factory qui va se charger de generer un objet de type Animal comme on le fesais avec Factory Method.

L'un des principaux avantages de ce pattern, c'est qu'il facile l'extensibilité des fonctionialites dans notre application. Et pour rajouter un type d'animal, on cree juste une classe qui heritera de de notre interface abstraite.

Sans plus tarder, allons direct dans notre code.

Les sources du pattern précedent ont été repris et seul les modifications necessaires ont été apporter.